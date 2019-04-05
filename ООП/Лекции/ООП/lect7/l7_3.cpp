#include <iostream>
#include <string>
using namespace std;

int main(){
   string n {"Kamelia"};
   for(auto it= n.begin(); it<n.end(); it++){
   	   cout<<*it<<endl;
   }
   
   // zamesvane na simvoli
   n.replace(n.begin(), n.begin()+3, "An");
   cout<<n<<endl;
   
	//C++ nizovete sa izmenyaemi
	n[1]='m';
	cout<<n<<endl;
	
	
	
}
