#pragma once
#include <memory>
#include <array>
#include <functional>

template <typename P, typename OtherP>
using CombinedPixel = decltype(std::declval<P>() + std::declval<OtherP>());

template<typename P, size_t W, size_t H>
class Image 
{
public:
    Image() = default;

    Image(const P& pixel) 
    {
        for(auto& line: _pixels)
        {
            for(auto i = 0; i < W; i++)
            {
                line[i] = pixel;
            }
        }
    }
    Image(const std::function<P(size_t i, size_t j)>& f)
    {
        for(auto i = 0; i < H; i++)
        {
            for(auto j = 0; j < W; j++)
            {
                _pixels[i][j] = f(i, j);
            }
        }
    }

    const P& operator()(size_t x, size_t y) const
    {
        return _pixels[y][x];
    } 

    P& operator()(size_t x, size_t y)
    {
        return _pixels[y][x];
    }

    Image<CombinedPixel, W, H> operator+(const Image& other) const
    {
        Image<CombinedPixel<P, OtherP>, W, H> img;
        for(auto i = 0; i < H; i++)
        {
            for(auto j = 0; j < W; j++)
            {
                img._pixels[i][j] = _pixels[i][j] + other._pixels[i][j];
            }
        }
        return img;
    }

    


private:
    std::array<std::array<P, W>, H> _pixels;
};