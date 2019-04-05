#include <iostream>
using namespace std;
	class rectangle{
	public:
		// ��� ������������
		rectangle();
		rectangle(unsigned, unsigned);
		// ��������� ����� �� �� ������� � ��������
		~rectangle(){
			cout << "Object destructed" << endl;
		}

		int area();
		unsigned sidea;
		unsigned sideb;
	};

	// ������� ����������� �� �������, ��� ���������
	// �� �������� ����������� �� ������ ��������
	rectangle::rectangle(){
		cout << "Enter side a: ";
		cin >> sidea;
		cout << "Enter side b: ";
		cin >> sideb;
	}

	// ��� ������ ����������� ��� ���� ��� �������
	// ��������� �� �������� �� �������������
	rectangle::rectangle(unsigned a, unsigned b){
		sidea = a;
		sideb = b;
	}

	// ���������, ����� ����� ������
	int rectangle::area(){
		return ((sidea) * (sideb));
	}

	int main(){
		// ��������� ��� ����� � �� ��������������
		// ���� ������� �����������
		rectangle *test = new rectangle();
		// ����������� ������ �� �������������
		cout << "The area of the rectangle is: ";
		cout << test->area() << endl;
		// ��������� ����������� �
		// ������������� ������� ����� �� ������
		delete test;
		cout << endl << endl;

		// ��� ��������� �������� ������������
		// ��� �������� ������ ���� ������ �����������
		rectangle *test2 = new rectangle(5,3);
		cout << "The area of the second rectangle is: ";
		cout << test2->area() << endl;
		delete test2;
	}
