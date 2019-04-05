#include <iostream>
using namespace std;

// bazov klas
class A{
	   	int a;
	public:
		A(){ a=1; 
	    cout<<"default ctor A\n";
		}
		A(int a){ this->a=a;
		   	 cout<<"parameter ctor A\n";
		}
};

class B:public A{
	double b;
	public:
		B() {
			b=1.5;
			cout<<"default ctor B\n";
		}
		B(int a, double b):A(a){
			this->b=b;
			cout<<"parameter ctor B\n";
		}
		
};

int main(){
	A objectA;
	cout<<sizeof(objectA)<<endl; 
	
	B objectB;
	cout<<sizeof(objectB)<<endl;
	
	A objectA_2(34);  // parameter ctor A
	
	B objectB_2(20, 1.7);
}
