#include <iostream>
#include <cstdlib>
#include "Point.h"
#include "Triangle.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "Bulgarian");
	/*����������, ����� �������� �� ����
	����� ������ �� ������ ������������*/
	size_t mode;
	//���� �� ������ � ���������
	system("COLOR B");
	cout <<"1-�����\n" <<
			"2-������\n" <<
			"3-�����\n" <<
			"4-�������\n" <<
			"5-����������\n"<<
			"0-����� �� ����������\n" <<
			"����, �������� ��� ����������� �����: ";
	//��������� �� ����� �� �����������
		cin >> mode;
	//�������� �� ���� ���� ������� � ��-������ �� 5 ��� ��-����� �� 0
		if (mode>5||mode<0)
		{
			cout << "����, �������� ������ �����, ����� �������� �� ����������� ����� ��� 0 �� �����: ";
			cin >> mode;
		}
	//���������� �� ���������� ������� ���� ����������
		if (mode==1)
		{
			double x1, y1, z1 ;
			
			std::cout << "����, �������� ������������ �� ������� �����!\n";
			std::cout << "����, �������� �������� �� �:";
			std::cin >> x1;
			std::cout << "����, �������� �������� �� y:";
			std::cin >> y1;
			std::cout << "����, �������� �������� �� z:";
			std::cin >> z1;
			Point point�(x1, y1, z1);

			double x2, y2, z2;
			std::cout << "����, �������� ������������ �� ������� �����!\n";
			std::cout << "����, �������� �������� �� �:";
			std::cin >> x2;
			std::cout << "����, �������� �������� �� y:";
			std::cin >> y2;
			std::cout << "����, �������� �������� �� z:";
			std::cin >> z2;
			Point pointB(x2, y2, z2);

			cout << "������������ �� ������� ����� ��:\n";
			point�.print();
			cout << "������������ �� ������� ����� ��:\n";
			pointB.print();
			cout << "�������� ��?:";
			point� == pointB;
			
		}
		else if (mode==2)
		{
			cout << "������!\n";
		}
		else if (mode==3)
		{
			cout << "�����\n";
		}
		else if (mode == 4) {
			cout << "�������\n";
		}
		else if (mode==5)
		{
//			Triangle triangle();
			double a1, b1;
			std::cout << "����, �������� ������������ �� ������� �����!\n";
			std::cout << "����, �������� �������� �� �:";
			std::cin >> a1;
			std::cout << "����, �������� �������� �� y:";
			std::cin >> b1;
			Point pointA(a1,b1);

			double a2, b2;
			std::cout << "����, �������� ������������ �� ������� �����!\n";
			std::cout << "����, �������� �������� �� �:";
			std::cin >> a2;
			std::cout << "����, �������� �������� �� y:";
			std::cin >> b2;
			Point pointB(a2,b2);

			double a3, b3;
			std::cout << "����, �������� ������������ �� ������� �����!\n";
			std::cout << "����, �������� �������� �� �:";
			std::cin >> a3;
			std::cout << "����, �������� �������� �� y:";
			std::cin >> b3;
			Point pointC(a3,b3);

			/*double area() {
				double area;
				area = b2*(a1*b2 + b1*a3 + b3*a2 - b2*a3 - b1*a2 - a1*b3);
				return area;
			}*/
			std::cout << "������� �� ����������� �: " << area();
			//cout << "����������\n";
		}
	
	
	

	return 0;
}