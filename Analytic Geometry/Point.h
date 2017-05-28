//#pragma once - ���� �� VS
#ifndef POINT_H
#define POINT_H
#include "Element.h"
class Point :
	public Element
{
protected:

	double x, y, z;
public:
	//����������� � �������� �� ������������
	Point(double x=0, double y= 0, double z=0);
	
	//Getters � Setters
	double getX()const;
	void setX(int x);
	double getY()const;
	void setY(int y);
	double getZ()const;
	void setZ(int z);
	void setXYZ(int x, int y, int z);
	void print()const;

	//������������� ==, ����� �� �������� �� �������� �� �����
	bool operator==(Point& point)const;
	//����������
	~Point();
};

#endif