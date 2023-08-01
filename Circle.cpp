
#include "Circle.h"
#include <cmath>
Circle::Circle()
{
    this->radius = 0;
    this->center = { 0,0,0 };
    this->id = "Circle";
}

Circle::Circle(double radius, std::vector<double> center = { 0,0,0 })
{
    this->radius = radius;
    this->center = center;
    this->id = "Circle";
}

Circle::Circle(const Circle& circle)
{
    this->center = circle.center;
    this->radius = circle.radius;
    this->id = "Circle";
}

std::vector<double> Circle::value(double t)
{
    return { radius * cos(t) + center[0],radius * sin(t) + center[1],0 };
}

std::vector<double> Circle::derivative(double t) 
{
    return { -radius * sin(t),radius * cos(t), 0 };
}

std::vector<double> Circle::getCenter()
{
    return center;
}

double Circle::getRadius()
{
    return radius;
}

std::string Circle::getID()
{
    return this->id;
}