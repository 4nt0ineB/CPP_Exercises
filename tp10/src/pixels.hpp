#pragma once
#include "../lib/image_lib.hpp"

struct RGBA
{
    char r,g,b,a;
};

struct RGB
{
    char r,g,b;
};

struct Luma
{
    char l;
};

template<typename To, typename From>
To convert(const From& stuff)
{}

template <>
RGBA convert<RGBA, RGBA>(const RGBA& x)
{
    return { x.r, x.g, x.b, x.a };
}

template <>
RGB convert<RGB, RGB>(const RGB& x)
{
    return { x.r, x.g, x.b };
}

template <>
Luma convert<Luma, Luma>(const Luma& x)
{
    return { x.l };
}

template <>
RGB convert<RGB, RGBA>(const RGBA& x)
{
    return { x.r, x.g, x.b };
}

template <>
RGBA convert<RGBA, RGB>(const RGB& x)
{
    return { x.r, x.g, x.b, 255 };
}

template <>
Luma convert<Luma, RGB>(const RGB& x)
{
    return { rgb_to_grayscale(x.r, x.g, x.b) };
}

template <>
RGB convert<RGB, Luma>(const Luma& x)
{
    return { grayscale_to_rgb(x.l) };
}

template <>
Luma convert<Luma, RGBA>(const RGBA& x)
{
    return convert<RGBA, RGB>(convert<Luma, RGB>(x));
}

template <>
RGBA convert<RGBA, Luma>(const Luma& x)
{
    return convert<RGB, RGBA>(convert<RGB, Luma>(x));
}


RGBA operator+(const RGBA& lhs, const RGBA& rhs)
{
    return mix_color(lhs.r, lhs.g, lhs.b, lhs.a, rhs.r, rhs.g, rhs.b, rhs.a);
}

RGB operator+(const RGB& lhs, const RGBA& rhs)
{
    RGBA c = convert(lhs); 
    return convert<RGB, RGBA>(mix_color(c.r, c.g, c.b, c.a, rhs.r, rhs.g, rhs.b, rhs.a));
}

RGB operator+(const Luma& lhs, const RGBA& rhs)
{
    RGBA c = convert(lhs); 
    return convert<RGB, RGBA>(mix_color(c.r, c.g, c.b, c.a, rhs.r, rhs.g, rhs.b, rhs.a));
}

RGBA operator+(const RGBA& lhs, const RGB& rhs)
{
    RGBA c = convert(rhs); 
    return mix_color(lhs.r, lhs.g, lhs.b, lhs.a, c.r, c.g, c.b, c.a);
}

RGB operator+(const RGB& lhs, const RGB& rhs)
{
    RGBA c = convert(lhs); 
    RGBA c2 = convert(rhs);
    return convert<RGB, RGBA>(mix_color(c.r, c.g, c.b, c.a, c2.r, c2.g, c2.b, c2.a));
}

RGB operator+(const Luma& lhs, const RGB& rhs)
{
    return lhs + convert<RGBA, RGB>(rhs);
}

template<typename Tout>
RGBA operator+(const Tout& lhs, const Luma& rhs)
{
    RGBA = convert(lhs);
    return { lhs.r, lhs.r, lhs.g, rhs.l };
}