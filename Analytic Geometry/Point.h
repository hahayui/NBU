//#pragma once - само за VS
#ifndef POINT_H
#define POINT_H
#include "Element.h"
class Point :
	public Element
{
protected:

	double x, y, z;
public:
	//Конструктор с аргумети по подразбиране
	Point(double x=0, double y= 0, double z=0);
	
	//Getters и Setters
	double getX()const;
	void setX(int x);
	double getY()const;
	void setY(int y);
	double getZ()const;
	void setZ(int z);
	void setXYZ(int x, int y, int z);
	void print()const;

	//предефинирано ==, което се използва за сравение на точки
	bool operator==(Point& point)const;
	//деструктор
	~Point();
};

#endif