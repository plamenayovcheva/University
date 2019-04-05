#include <iostream>
using namespace std;
	class triangle{
	public:
		// ��� ������������
		triangle();
		triangle(double, double, double, double);
		// ��������� ����� �� �� ������� � ��������
		~triangle(){
			cout << "Object destructed" << endl;
		}
		double area();
		double perimeter();
		double sidea;
		double sideb;
		double sidec;
		double sideh;
	};

	// ������� ����������� �� �������, ��� ���������
	// �� �������� ����������� �� ������ ��������
	triangle::triangle(){
		cout << "Enter side a: ";
		cin >> sidea;
		cout << "Enter side b: ";
		cin >> sideb;
		cout << "Enter side c: ";
		cin >> sidec;
		cout << "Enter h: ";
		cin >> sideh;
	}

	// ��� ������ ����������� ��� ���� ��� �������
	// ��������� �� �������� �� �������������
	triangle::triangle(double a, double h, double b, double c){
		sidea = a;
		sideb = b;
		sidec = c;
		sideh = h;
	}

	// ���������, ����� ����� ������
	double triangle::area(){
		return (((sidea) * (sideh))/2);
	}
	double triangle::perimeter(){
		return ((sidea) + (sideb) + (sidec));
	}

	int main(){
		// ��������� ��� ����� � �� ��������������
		// ���� ������� �����������
		triangle *test = new triangle();
		// ����������� ������ �� �������������
		cout << "The area of the triangle is: ";
		cout << test->area() << endl;
		cout << "The perimeter of the triangle is: ";
		cout << test->perimeter() << endl;
		// ��������� ����������� �
		// ������������� ������� ����� �� ������
		delete test;
		cout << endl << endl;

		// ��� ��������� �������� ����������
		// ��� �������� ������ ���� ������ �����������
		triangle *test2 = new triangle(5,1,2,3);
		cout << "The area of the second rectangle is: ";
		cout << test2->area() << endl;
		cout << "The perimeter of the second rectangle is: ";
		cout << test2->perimeter() << endl;
		delete test2;
	}
