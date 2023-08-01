
#include "Helix.h"
#include <cmath>
Helix::Helix()
{
    this->radius = 0;
    this->center = { 0,0,0 };
    this->id = "Helix";
}

Helix::Helix(double radius, std::vector<double> center = { 0,0,0 })
{
    this->radius = radius;
    this->center = center;
    this->id = "Helix";
}

Helix::Helix(const Helix& Helix)
{
    this->center = Helix.center;
    this->radius = Helix.radius;
    this->id = "Helix";
}

std::vector<double> Helix::value(double t)
{
    return { radius * cos(t) + center[0],radius * sin(t) + center[1], t + center[2] };
}

std::vector<double> Helix::derivative(double t)
{
    return { -radius * sin(t),radius * cos(t), 1 };
}

std::vector<double> Helix::getCenter()
{
    return this->center;
}

double Helix::getRadius()
{
    return this->radius;
}

std::string Helix::getID()
{
    return this->id;
}
