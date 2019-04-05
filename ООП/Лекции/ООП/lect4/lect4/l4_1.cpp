#include <iostream>
using namespace std;

class A{
	int x;
	double y;
  public:
	A():x(1), y(2.6){ }
	A(int _x, double _y){ 
	   x=_x;
	   y=_y;
	}
	double calc(){
		return x*10 + y;
	}
		
};

int main(){
	A obekt1;
	cout<<obekt1.calc()<<endl;//12.6
	
	A obekt2(3,4.5);
	cout<<obekt2.calc()<<endl;
	
}
