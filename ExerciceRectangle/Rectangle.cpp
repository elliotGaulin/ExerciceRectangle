#include "Rectangle.h"

Rectangle::Rectangle(Point point, int largeur, int hauteur) : m_largeur{ largeur }, m_hauteur{ hauteur }, m_point{ point } {}

int Rectangle::GetHauteur() const
{
	return m_hauteur;
}
int Rectangle::GetLargeur() const
{
	return m_largeur;
}

Point Rectangle::GetPoint() const
{
	return m_point;
}

void Rectangle::SetPoint(int x, int y)
{
	m_point.SetPoint(x, y);
}
void Rectangle::SetHauteur(int hauteur)
{
	m_hauteur = hauteur;
}
void Rectangle::SetLargeur(int largeur)
{
	m_largeur = largeur;
}

bool Rectangle::EstEnCollision(Rectangle rectangle1, Rectangle rectangle2)
{
	int x1A{ rectangle1.GetPoint().GetX() };
	int y1A{ rectangle1.GetPoint().GetY() };
	int x2A{ rectangle1.GetPoint().GetX() + rectangle1.GetLargeur() };
	int y2A{ rectangle1.GetPoint().GetY() + rectangle1.GetHauteur() };

	int x1B{ rectangle2.GetPoint().GetX() };
	int y1B{ rectangle2.GetPoint().GetY() };
	int x2B{ rectangle2.GetPoint().GetX() + rectangle2.GetLargeur() };
	int y2B{ rectangle2.GetPoint().GetY() + rectangle2.GetHauteur()};

	if (x1A > x2B ||
		x2A < x1B ||
		y1A > y2B ||
		y2A < y1B)
	{
		return false;
	}

	return true;
}

bool Rectangle::EstDansRectangle(Point point)
{
	if (point.GetX() >= m_point.GetX() &&
		point.GetX() <= m_point.GetX() + m_largeur &&
		point.GetY() >= m_point.GetY() &&
		point.GetY() <= m_point.GetY() + m_hauteur)
	{
		return true;
	}
	return false;
}