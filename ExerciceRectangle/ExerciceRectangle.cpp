// ExerciceRectangle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include "Point.h"
#include "Rectangle.h"
int main()
{
    
    Point p1{ 0,0 };
    Point p2{ 6,6 };
    Rectangle rectangle1{ p1,10,15 };
    Rectangle rectangle2{ p2,10,5 };

    Point point{ 0,0 };
    int largeurCanvas = 100;
    int hauteurCanvas = 20;

    for (size_t i = 0; i < hauteurCanvas; i++)
    {
        for (size_t j = 0; j < largeurCanvas; j++)
        {
            point.SetPoint(i, j);
            if (rectangle1.EstDansRectangle(point) && rectangle2.EstDansRectangle(point))
            {
                std::cout << '#';
            }
            else if (rectangle1.EstDansRectangle(point))
            {
                std::cout << '?';
            }
            else if(rectangle2.EstDansRectangle(point))
            {
                std::cout << '$';
            }
            else
            {
                std::cout <<' ';
            }
        }
    std::cout << '\n';
    }

    if (Rectangle::EstEnCollision(rectangle1, rectangle2))
    {
        std::cout << "Les rectangles sont en collision!";
    }
    else
    {
        std::cout << "Les rectangles ne sont pas en collision!";
    }

}

