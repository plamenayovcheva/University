#include <iostream>
#include <string>
using namespace std;

int main(){
//sravnyavane - leksikografski
	//< == > - bulevo znachenie 
	// compare - <0, ako izvikvastiyat obekt e <
	// 0
	// >0, ako izvikvastiyat obekt e po-golyam
	string n1{"Ana"};
	string n2("Anastaciya");
	cout<<boolalpha<<endl;
	cout<<n1<<" < "<<n2<<": "<<(n1<n2)<<endl;
	cout<<"compare:"<<n1.compare(n2)<<endl; 
	cout<<"compare 3 simvola:"<<n1.compare(0,3, n2, 0,3)<<endl;
	
	// otdelyane na podniz - substr
	// nachalna poziciya + broi simvoli
	// bez broi simvoli - do kraya
	string small=n2.substr(6, 4);
	cout<<small<<endl;
	string small1= n2.substr(n2.length()-4);
	cout<<small1<<endl;
	
	//tyrsene
	//find - poziciya na namereniya niz v tekustiya
	// ili string::npos - ako nizyt ne e nameren
	int pos=n2.find("as");
	if(pos!= string::npos){
		cout<<"as se sydyrza v "<<n2<< " na "<<pos<<" posiciya\n";
	}
	else{
		cout<<"as ne se sydyrza v "<<n2<<endl;
	}
	
	string full="Ivan Dimov";
	string fam=full.substr(full.find(" ")+1);
	cout<<fam<<endl;
	
	
	
	
	
	
	
	
	
	
	
}
