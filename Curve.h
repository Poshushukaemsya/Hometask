#pragma once
#ifndef CURVE_H
#define CURVE_H
#include <vector>
#include <string>


class Curve
{
protected:
    std::string id;
public:
    virtual std::vector<double> value(double t)
    {
        return { 0 };
    }
    virtual std::vector<double> derivative(double t)
    {
        return { 0 };
    }
    virtual std::string getID()
    {
        return "";
    }
    virtual double getRadius()
    {
        return 0;
    }
};

#endif
