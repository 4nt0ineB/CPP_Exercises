#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <string>
#include <algorithm>


struct Point2d 
{
    int x;
    int y;
    bool operator==(const Point2d& other) const
    {
        return x == other.x && y == other.y;
    }
};

class Point2dHash
{
public:
    std::size_t operator()(const Point2d& point) const {
        return (point.x*39)^point.y;
    }
};

class Point2dEqual
{
public:
    bool operator()(const Point2d& point_a, const Point2d& point_b) const {
        return point_a.x == point_b.x && point_a.y == point_b.y;
    }
};


namespace std {

template<>
struct hash<Point2d>
{
    std::size_t operator()(const Point2d& point) const {
        return (point.x*39)^point.y;
    }
};

}

enum class Content 
{
    Empty, Red, Yello
};



int main()
{
    std::unordered_map<Point2d, Content> grid;
    Point2d point;
    point.x = 1;
    point.y = 2;

    grid.emplace(point, Content::Yello);
    

    return 0;
}

