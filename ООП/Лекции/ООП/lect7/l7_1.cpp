#include <iostream>
#include <string>
using namespace std;

int main(){
	// Syzdavane na obekti string
	string s1;
	string s2("Miroslava");
	//Dylzina na niza
	cout<<s1<<"length:"<<s1.length()<<endl;
	cout<<s2<<"length:"<<s2.length()<<endl;
	
	//Prisvoyavane =
	s1="Ekaterina";
	
	//Konkatenaciya - slivane  na nizove
	string s3= s1+" "+"Dineva";
	cout<<s3<<endl; 
	s2+="Nikolova";
	cout<<s2<<endl;
	
	//vyvezdane
	string s4;
	cout<<"Ime:"; cin>>s4;  // 1 duma
	cout<<s4<<endl;
	cout<<"Pylno ime:";
	cin.get(); // izvlicha  noviya red ot potoka
	getline(cin, s4 ); //1 i poveche dumi
	cout<<s4<<endl;
	
	
	
	
	
	
	
	
	
	
}
