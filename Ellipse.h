#pragma once

#include <vector>
#include "Curve.h"

class Ellipse : public Curve
{
    std::vector<double> center;
    double a;
    double b;
public:
    /// <summary>
    /// Default construsctor of the Ellipse class.
    /// </summary>
    Ellipse();
    /// <summary>
    /// Parameterized constuctor of the Ellipse class.
    /// </summary>
    /// <param name="radius">Real number value for radius</param>
    /// <param name="center">Planar XoY coordinates of center point of the Ellipse. [0] for X-axis. [1] for Y-axis.
    /// [2] for Z-axis(always equals 0 due to task).</param>
    Ellipse(double a, double b, std::vector<double> center);
    /// <summary>
    /// Copy Constructor of the Ellipse class.
    /// </summary>
    Ellipse(const Ellipse& Ellipse);
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
    /// A-radius getter.
    /// </summary>
    double getA();
    /// <summary>
    /// B-radius getter.
    /// </summary>
    double getB();
    std::string getID() override;
};