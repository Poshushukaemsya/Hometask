
#include "Ellipse.h"
#include <cmath>
Ellipse::Ellipse()
{
    this->a = 0;
    this->b = 0;
    this->center = { 0,0,0 };
    this->id = "Ellipse";
}

Ellipse::Ellipse(double a, double b, std::vector<double> center = { 0,0,0 })
{
    this->a = a;
    this->b = b;
    this->center = center;
    this->id = "Ellipse";
}

Ellipse::Ellipse(const Ellipse& ellipse)
{
    this->center = ellipse.center;
    this->a = ellipse.a;
    this->b = ellipse.b;
    this->id = "Ellipse";
}

std::vector<double> Ellipse::value(double t)
{
    return { a * cos(t) + center[0],b * sin(t) + center[1], 0 };
}

std::vector<double> Ellipse::derivative(double t)
{
    return { -a * sin(t),b * cos(t), 0 };
}

std::vector<double> Ellipse::getCenter()
{
    return center;
}

double Ellipse::getA()
{
    return a;
}

double Ellipse::getB()
{
    return b;
}

std::string Ellipse::getID()
{
    return this->id;
}