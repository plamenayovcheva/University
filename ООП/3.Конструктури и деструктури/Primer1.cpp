#include <iostream>
using namespace std;
	class rectangle{
	public:
		// Два конструктора
		rectangle();
		rectangle(unsigned, unsigned);
		// Функциите могат да се описват и директно
		~rectangle(){
			cout << "Object destructed" << endl;
		}

		int area();
		unsigned sidea;
		unsigned sideb;
	};

	// Първият конструктор се извиква, без параметри
	// Ще поискаме потребителя да въведе страните
	rectangle::rectangle(){
		cout << "Enter side a: ";
		cin >> sidea;
		cout << "Enter side b: ";
		cin >> sideb;
	}

	// При втория конструктор ние сами сме указали
	// дължините на страните на правоъгълника
	rectangle::rectangle(unsigned a, unsigned b){
		sidea = a;
		sideb = b;
	}

	// Функцията, която връща лицето
	int rectangle::area(){
		return ((sidea) * (sideb));
	}

	int main(){
		// Създаваме нов обект и го инициализираме
		// чрез неговия конструктор
		rectangle *test = new rectangle();
		// Отпечатваме лицето на правоъгълника
		cout << "The area of the rectangle is: ";
		cout << test->area() << endl;
		// Извикваме деструктора и
		// освобождаваме паметта заета от обекта
		delete test;
		cout << endl << endl;

		// Тук създаваме директно правоъгълник
		// със зададени страни чрез втория конструктор
		rectangle *test2 = new rectangle(5,3);
		cout << "The area of the second rectangle is: ";
		cout << test2->area() << endl;
		delete test2;
	}
