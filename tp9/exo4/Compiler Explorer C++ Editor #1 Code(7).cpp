#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <string>
#include <algorithm>
#include <set>


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

////// 


struct Point3d 
{
    int x, y, z;
    bool operator<(const Point3d& other) const 
    {
        return std::tie(x, y, z) < std::tie(other.x, other.y, other.z);
    }
};


class Point3dCompare 
{
public:
    bool operator()(const Point3d& a, const Point3d& b) const
    {
        return std::tie(a.x, a.y, a.z) < std::tie(b.x, b.y, b.z);
    }
};


int main()
{
    std::unordered_map<Point2d, Content> grid;
    Point2d point;
    point.x = 1;
    point.y = 2;

    grid.emplace(point, Content::Yello);
    
    std::set<Point3d> coords;
    Point3d point3d;
    point3d.x = 1;


    coords.insert(point3d);


    return 0;
}

