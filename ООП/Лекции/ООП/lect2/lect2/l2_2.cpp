#include <iostream>
using namespace std;

class Circle {
	static constexpr double PI=3.14;
	double radius;
	
	public:
		//konstruktori
	// default - bez parametri
	Circle(){
		radius=1.0;
		cout<<"default ctor called\n";
	}	
    // parameter ctor
    Circle(double r){
     if(r>0){
     		radius=r; 
	 }	
	 else{
	 	cout<<"Nevalidno znachenie na r\n";
	 	cout<<"radius e inicializiran s 0\n";
	 	radius=0;
	 }
    
    	cout<<"parameter ctor called\n";
	}
	
	// metodi za dostyp
	// metod za chetene - getter
	double getR() const {
	      return radius;
	}
	   
	void setR(double newR){
		if(newR>0){
			radius=newR;
		}
		else{
		  cout<<"nedopustimo znachenie za radiusa\n";	
		}
	}
	
	double perimeter() const{
	   return 2*PI*radius;
	}
	
	double area() const{
	   cout<<"area, this="<<this<<endl;	
	   return PI*radius*radius;
	}
	
	// destructor
	~Circle() {
		cout<<"destructing object radius="<<radius<<endl;
		cin.get();
	}
	
};

int main(){
	Circle c1(7.1);
	cout<<"&c1="<<&c1<<endl;
	cout<<"lice:"<<c1.area()<<endl;
	
	Circle c2(3.3);
	cout<<"&c2="<<&c2<<endl;
	cout<<"lice:"<<c2.area()<<endl;
	   
	}
