#include <iostream>
#include<iomanip>
using namespace std;



int main(){
   double b{1.3456};
   cout<<setw(10)<<b<<endl;
   cout<<setw(10)<<setprecision(2)
       << setfill('*')<<setiosflags(ios::left|ios::fixed)
	   <<b<<endl;
	
	
}
