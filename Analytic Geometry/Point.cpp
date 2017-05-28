#include "Point.h"
#include <iostream>


Point::Point(double x, double y, double z):x(x), y(y), z(z){
}
//Getters
double Point::getX()const { 
	return x;
}
double Point::getY()const { 
	return y;
}
double Point::getZ()const { 
	return z;
}
//Setters
void Point::setX(int x) {
	this->x = x; 
}
void Point::setY(int y) { 
	this->y = y; 
}
void Point::setZ(int z) { 
	this->z = z;
}

void Point::setXYZ(int x, int y, int z) {
	this->x = x; 
	this->y = y;
	this->z = z;
}
	void Point::print()const{
		std::cout << "Точките са: \n" 
			<< "x= " << x << "\n" 
			<< "y= " << y << "\n"
			<< "z= " << z << "\n";
	}
	bool Point::operator==(Point& point)const{
		if (point.x==x&&point.y==y&&point.z==z)
		{
			std::cout << "True!\n";
			return true;
			
		}
		else
		{	
			std::cout << "False!\n";
			return false;
			
		}
	}
	


Point::~Point(){}
