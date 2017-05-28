//#pragma once - само за VS
#ifndef TRIANGLE_H
#define TRIANGLE_H
//множествено наследяване /фигура 1/
class Triangle :
	public Point,
	public Element
	
{
public:
	Triangle();
	Triangle(const Point & pA, const Point & pB, const Point & pC);
	Point pointA, pointB, pointC;
	Triangle(Point pointA,Point pointB, Point pointC){}
	
	double get_pointA()const;
	void set_pointA(Point pointA);
	double get_pointB()const;
	void set_pointB(Point pointB);
	double get_pointC()const;
	void set_pointC(Point pointC);
	void set_pointsABC(Point pointA, Point pointB, Point pointC);
	double area();
	//void print()const;
	
	~Triangle();
};
#endif
