#pragma once

#include <vector>
#include "Curve.h"

class Helix : public Curve
{
    std::vector<double> center;
    double radius;
public:
    /// <summary>
    /// Default construsctor of the Helix class.
    /// </summary>
    Helix();
    /// <summary>
    /// Parameterized constuctor of the Helix class.
    /// </summary>
    /// <param name="radius">Real number value for radius</param>
    /// <param name="center"> XoYoZ coordinates of center point of the Helix. [0] for X-axis. [1] for Y-axis.
    /// [2] for Z-axis.</param>
    Helix(double radius, std::vector<double> center);
    /// <summary>
    /// Copy Constructor of the Helix class.
    /// </summary>
    Helix(const Helix& Helix);
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
    double getRadius();
    std::string getID() override;
};

