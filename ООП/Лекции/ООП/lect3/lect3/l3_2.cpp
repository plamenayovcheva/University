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

class OfficeRoom:public Room{
	int number;
	string label;
	public:
	OfficeRoom(int n, string l, 
	       double _a=5.5, double _b=3.5):Room(_a, _b){
	      number=n;
		  label=l; 	
     }
	 int get_number() const{ return number;}
	 string get_label() const{ return label;}
	 
	 void set_number(int n)	{
	 	 number=n;
	 }
	 void set_label(string l){
	 	label=l;
	 }
	 //override na print
	 // ednakva signatura, razlichno deistvie
	 // skriva metoda na bazoviya klas
	 void print() const{
	 	cout<<"Office nomer:"<<number<<"\n";
	 	cout<<label<<endl;
	 	Room::print(); // print na bazoviya klas
     }
     
     // opisanie na kvadraturata na stayata
     // <25- malka, 25-40 - sredna, >40 - golyama
     
     string OfficeSize(){
     	if( area() <25)  return "small";
     	else if (area() <40) return "medium";
     	else return "large";
	 }  
};

int main() {
	OfficeRoom my(303, "KIT");
	cout<<my.get_a()<<endl;
	my.set_a(8.2);
	my.set_b(6.5);
	
	my.print();
	
	cout<<"Plost:"<<my.area()<<" m2\n";
	cout<<"Office is "<<my.OfficeSize()<<endl;
	
	
}
