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
	   return PI*radius*radius;
	}
	
	// destructor
	~Circle() {
		cout<<"destructing object radius="<<radius<<endl;
		cin.get();
	}
	
};

int main(){
	  // Circle c1= Circle(); //stekov obekt
	   Circle c1;
	   Circle* c2= new Circle();
	   
	   Circle c3(1.9);
	   Circle * c4= new Circle(2.6); 
	   
//	   c1.r=2.0; // setter - metod za zapis
//      cout<<c1.r<<endl; // getter - metod za chetene

        // izvezdane na dannite za obektite
       cout<<"c1, r="<<c1.getR()<<endl; //1
	   cout<<"c2, r="<<c2->getR() <<endl; //1
	   
	    cout<<"c3, r="<<c3.getR()<<endl; //1.9
	   cout<<"c4, r="<<c4->getR() <<endl; //2.6
	   
	   c1.setR(7.8);
	   c2->setR(c1.getR()*2);
	   
	   cout<<"c1, sled promyanata r="<<c1.getR()<<endl;
	   cout<<"c2, sled promyanata r="<<c2->getR()<<endl;
	   
 	   cout<<"c1, perimetyr="<<c1.perimeter()
 	        << " lice="<<c1.area()<<endl;
 	        
 	   cout<<"c2, perimeter="<<c2->perimeter()  
		   <<" lice="<<c2->area()<<endl;  
		   
	  // izvikvane na destructora za dyn. obekti
	  delete c2;
	  delete c4;	    
	}
