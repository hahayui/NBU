#include<cmath>
#include <iostream>
#include "Element.h"
#include "Point.h"
#include "Triangle.h"


Triangle::Triangle(){
}

Triangle::Triangle(const Point &pA, const Point &pB, const Point &pC) : pointA(pA), pointB(pB), pointC(pC) {}



double Triangle::get_pointA() const
{
	return x,y;
}

void Triangle::set_pointA(Point pointA)
{
	this->x = x;
	this->y = y;
}

double Triangle::get_pointB() const
{
	return x,y;
}

void Triangle::set_pointB(Point pointB)
{
	this->x = x;
	this->y = y;
}

double Triangle::get_pointC() const
{
	return x,y;
}

void Triangle::set_pointC(Point pointC)
{
	this->x = x;
	this->y = y;
}

void Triangle::set_pointsABC(Point pointA, Point pointB, Point pointC)
{
	Point::Point(pointA) = pointA;
	Point::Point(pointB) = pointB;
	Point::Point(pointC) = pointC;
}

//double Triangle::area()
//{
//	double area = 0;
//	area = 2 / ()
//	return area;
//}

Triangle::~Triangle()
{

}
