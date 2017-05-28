#include <iostream>
#include <cstdlib>
#include "Point.h"
#include "Triangle.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Bulgarian");
	/*променлива, която отговаря за това
	каква фигура ще избере потребителят*/
	size_t mode;
	//цвят на текста в конзолата
	system("COLOR B");
	cout <<"1-Точка\n" <<
			"2-Вектор\n" <<
			"3-Линия\n" <<
			"4-Отсечка\n" <<
			"5-Триъгълник\n"<<
			"0-Изход от програмата\n" <<
			"Моля, изберете вид геометрична обект: ";
	//въвеждане на число от потребителя
		cin >> mode;
	//проверка за това дали числото е по-голямо от 5 или по-малко от 0
		if (mode>5||mode<0)
		{
			cout << "Моля, въведете наново ЦИФРА, която отговаря на геометричен обект или 0 за изход: ";
			cin >> mode;
		}
	//използване на различните класове чрез проверката
		if (mode==1)
		{
			double x1, y1, z1 ;
			
			std::cout << "Моля, въведете координатите на първата точка!\n";
			std::cout << "Моля, въведете стойност за х:";
			std::cin >> x1;
			std::cout << "Моля, въведете стойност за y:";
			std::cin >> y1;
			std::cout << "Моля, въведете стойност за z:";
			std::cin >> z1;
			Point pointА(x1, y1, z1);

			double x2, y2, z2;
			std::cout << "Моля, въведете координатите на втората точка!\n";
			std::cout << "Моля, въведете стойност за х:";
			std::cin >> x2;
			std::cout << "Моля, въведете стойност за y:";
			std::cin >> y2;
			std::cout << "Моля, въведете стойност за z:";
			std::cin >> z2;
			Point pointB(x2, y2, z2);

			cout << "Координатите на първата точка са:\n";
			pointА.print();
			cout << "Координатите на втората точка са:\n";
			pointB.print();
			cout << "Съвпадат ли?:";
			pointА == pointB;
			
		}
		else if (mode==2)
		{
			cout << "Вектор!\n";
		}
		else if (mode==3)
		{
			cout << "Линия\n";
		}
		else if (mode == 4) {
			cout << "Отсечка\n";
		}
		else if (mode==5)
		{
//			Triangle triangle();
			double a1, b1;
			std::cout << "Моля, въведете координатите на ПЪРВАТА точка!\n";
			std::cout << "Моля, въведете стойност за х:";
			std::cin >> a1;
			std::cout << "Моля, въведете стойност за y:";
			std::cin >> b1;
			Point pointA(a1,b1);

			double a2, b2;
			std::cout << "Моля, въведете координатите на ВТОРАТА точка!\n";
			std::cout << "Моля, въведете стойност за х:";
			std::cin >> a2;
			std::cout << "Моля, въведете стойност за y:";
			std::cin >> b2;
			Point pointB(a2,b2);

			double a3, b3;
			std::cout << "Моля, въведете координатите на ТРЕТАТА точка!\n";
			std::cout << "Моля, въведете стойност за х:";
			std::cin >> a3;
			std::cout << "Моля, въведете стойност за y:";
			std::cin >> b3;
			Point pointC(a3,b3);

			/*double area() {
				double area;
				area = b2*(a1*b2 + b1*a3 + b3*a2 - b2*a3 - b1*a2 - a1*b3);
				return area;
			}*/
			std::cout << "Лицетно на тригъглника е: " << area();
			//cout << "Триъгълник\n";
		}
	
	
	

	return 0;
}