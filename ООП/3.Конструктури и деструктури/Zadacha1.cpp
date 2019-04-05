#include <iostream>
using namespace std;
	class triangle{
	public:
		// Два конструктора
		triangle();
		triangle(double, double, double, double);
		// Функциите могат да се описват и директно
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

	// Първият конструктор се извиква, без параметри
	// Ще поискаме потребителя да въведе страните
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

	// При втория конструктор ние сами сме указали
	// дължините на страните на правоъгълника
	triangle::triangle(double a, double h, double b, double c){
		sidea = a;
		sideb = b;
		sidec = c;
		sideh = h;
	}

	// Функцията, която връща лицето
	double triangle::area(){
		return (((sidea) * (sideh))/2);
	}
	double triangle::perimeter(){
		return ((sidea) + (sideb) + (sidec));
	}

	int main(){
		// Създаваме нов обект и го инициализираме
		// чрез неговия конструктор
		triangle *test = new triangle();
		// Отпечатваме лицето на правоъгълника
		cout << "The area of the triangle is: ";
		cout << test->area() << endl;
		cout << "The perimeter of the triangle is: ";
		cout << test->perimeter() << endl;
		// Извикваме деструктора и
		// освобождаваме паметта заета от обекта
		delete test;
		cout << endl << endl;

		// Тук създаваме директно триъгълник
		// със зададени страни чрез втория конструктор
		triangle *test2 = new triangle(5,1,2,3);
		cout << "The area of the second rectangle is: ";
		cout << test2->area() << endl;
		cout << "The perimeter of the second rectangle is: ";
		cout << test2->perimeter() << endl;
		delete test2;
	}
