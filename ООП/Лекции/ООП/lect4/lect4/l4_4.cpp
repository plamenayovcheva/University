#include <iostream>
#include <string>
using namespace std;

class Room{
	double a; // length
	double b; // width
   public:
     // ctor s podrazbirasti se znacheniya  na param.
     Room(double _a=5.5, double _b=3.5):a(_a), b(_b){
	 }
	 double get_a() const {return a;}
	 double get_b() const {return b;}
	 void set_a(double _a){
	 	  a=_a;
	 }
	 void set_b(double _b){
	 	  b=_b;
	 }
	 void print() const{
	    cout<<"Razmeri:"<<this->a<<" x " <<this->b<<endl;
	 }
	 double area() const{
	     return a*b;
	 }
};

class Apartment{
  	Room rooms[3];
  public:
	void print(){
		for(int i{0}; i<3; i++){
			rooms[i].print();
		}
	}
	double totalArea(){
		double total=0;
		for(int i=0; i<3; i++){
			total+= rooms[i].area();
		}
		return total;
	}
		
};

int main(){
	Apartment a1;
	a1.print();
	cout<<"plost:"<<a1.totalArea()<<" m^2\n";
}

