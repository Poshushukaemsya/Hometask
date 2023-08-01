#include <iostream>
#include <vector>
#include <algorithm>
#include "Circle.h"
#include "Ellipse.h"
#include "Helix.h"
#include "math.h"



# define PI   3.14159265358979323846
int main()
{
    //task 1 
    srand((unsigned int)time(0));
    std::vector<std::shared_ptr<Curve>> container;
    for (int i = 0; i < 10; ++i)
    {
        int random = rand() % 3;
        switch (random)
        {
        case 0:
            container.push_back(std::make_shared<Circle>(Circle((double)rand(),
                { (double)rand(), (double)rand(), 0 })));
            break;
        case 1:
            container.push_back(std::make_shared<Ellipse>(Ellipse((double)rand(), (double)rand(),
                { (double)rand() ,(double)rand() , 0 })));
            break;
        case 2:
            container.push_back(std::make_shared<Helix>(Helix((double)rand(),
                { (double)rand() ,(double)rand() ,(double)rand() })));
            break;
        }
    }


    //task 2
    std::vector<double> values, derivatives;
    for (int i = 0; i < 10; ++i)
    {
        values = container[i]->value(PI / 4);
        derivatives = container[i]->derivative(PI / 4);
        std::cout << i + 1 << " curve: \nx: " << values[0] << "\ny: " << values[1] << "\nz: " << values[2] << "\nderivative:\nx: "
            << derivatives[0] << "\ny: " << derivatives[1] << "\nz: " << derivatives[2] << "\n\n";
    }



    //task 3
    std::vector<std::shared_ptr<Curve>> container_сircles;
    for (int i = 0; i < 10; ++i)
    {
        if (container[i]->getID() == "Circle")
        {
            container_сircles.push_back(container[i]);
        }
    }


    //task 4
    for (int i = 1; i < container_сircles.size(); i++)
        for (int j = 0; j < container_сircles.size() - i; j++)
            if (container_сircles[j]->getRadius() > container_сircles[j + 1]->getRadius())
                std::swap(container_сircles[j], container_сircles[j + 1]);


    //task 5
    double sum = 0;
    for (int i = 0; i < container_сircles.size(); ++i)
        sum += container_сircles[i]->getRadius();
}   
