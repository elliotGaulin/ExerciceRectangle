// ExerciceRectangle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include "Point.h"
#include "Rectangle.h"
int main()
{
    //Entrées du rect 1
    int x1;
    int y1;
    int largeur1;
    int hauteur1;
    std::cout << "Entrez le x du rect1 :";
    std::cin >> x1;
    std::cout << "Entrez le y du rect1 :";
    std::cin >> y1;
    std::cout << "Entrez la largeur du rect1 :";
    std::cin >> largeur1;
    std::cout << "Entrez la hauteur du rect1 :";
    std::cin >> hauteur1;
    //Entrées du rect 2
    int x2;
    int y2;
    int largeur2;
    int hauteur2;
    std::cout << "Entrez le x du rect2 : ";
    std::cin >> x2;
    std::cout << "Entrez le y du rect2 : ";
    std::cin >> y2;
    std::cout << "Entrez la largeur du rect2 : ";
    std::cin >> largeur2;
    std::cout << "Entrez la hauteur du rect2 : ";
    std::cin >> hauteur2;

    //Création des objets
    Point p1{ x1,y1 };
    Point p2{ x2,y2 };
    Rectangle rectangle1{ p1, largeur1, hauteur1};
    Rectangle rectangle2{ p2, largeur2, hauteur2 };

    //Affichage
    Point point{ 0,0 };
    int largeurCanvas;
    int hauteurCanvas;
    std::cout << "Entrez la largeur du canvas : ";
    std::cin >> largeurCanvas;
    std::cout << "Entrez la hauteur du canvas : ";
    std::cin >> hauteurCanvas;

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
        std::cout << "Les rectangles ne sont pas en collision.";
    }

}

