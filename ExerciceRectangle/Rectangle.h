#pragma once
#include "Point.h"
class Rectangle
{
public:
	Rectangle(Point, int, int);
	int GetHauteur() const;
	int GetLargeur() const;
	Point GetPoint() const;
	
	/*
	void SetPoint(int, int);
	void SetLargeur(int);
	void SetHauteur(int);
	*/
	
	bool static EstEnCollision(Rectangle, Rectangle);
	bool EstDansRectangle(Point point);

private:
	Point m_point;
	int m_largeur;
	int m_hauteur;
};