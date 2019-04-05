#include <iostream>
using namespace std;

int main(){
	cout.precision(4);
	
	cout<<1.0/3.0<<endl;
	cout<<1000.0/3.0<<endl;
	cout<<1000000000.0/3.0<<endl;
	
    cout<<"scientific, precision 4\n";	
	cout<<scientific<<100.0/3.0<<endl;
	 cout<<"fixed, precision 4\n";	
	 cout<<fixed<<100000.0/3.0<<endl;
	
	
	
}
