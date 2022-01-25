#include "Point.h"
Point::Point(int x, int y) : m_x{ x }, m_y{ y } {}

void Point::SetPoint(int x, int y)
{
	m_x = x;
	m_y = y;
}

int Point::GetX() const
{
	return m_x;
}
int Point::GetY() const
{
	return m_y;
}