#pragma once
#include <vector>
#include "Curve.h"

class Circle : public Curve
{
    std::vector<double> center;
    double radius;
public:
    /// <summary>
    /// Default construsctor of the Circle class.
    /// </summary>
    Circle();
    /// <summary>
    /// Parameterized constuctor of the Circle class.
    /// </summary>
    /// <param name="radius">Real number value for radius</param>
    /// <param name="center">Planar XoY coordinates of center point of the circle. [0] for X-axis. [1] for Y-axis.
    /// [2] for Z-axis(always 0 due to task).</param>
    Circle(double radius, std::vector<double> center);
    /// <summary>
    /// Copy Constructor of the Circle class.
    /// </summary>
    Circle(const Circle& circle);
    /// <param name="t">Parameter t.</param>
    /// <returns>Returns coordinates of point on this curve depending on parameter t.</returns>
    std::vector<double> value(double t) override;
    /// <param name="t">Parameter t.</param>
    /// <returns>Returns vector of values of first derivative depending on parameter t.</returns>
    std::vector<double> derivative(double t) override;
    /// <summary>
    /// Center point getter.
    /// </summary>
    std::vector<double> getCenter();
    /// <summary>
    /// Radius getter.
    /// </summary>
    double getRadius() override;
    std::string getID() override;
};