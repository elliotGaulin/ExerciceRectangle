#pragma once
class Point
{
public:
	Point(int, int);
	int GetX() const;
	int GetY() const;

	void SetPoint(int, int);

private:
	int m_x;
	int m_y;
};