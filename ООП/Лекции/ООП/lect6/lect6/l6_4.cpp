#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

void printBill(string text, double price){
	cout.width(15);
	cout.fill('_');
	cout<<left<<text;
	cout.width(8);
	cout.precision(2);
	cout<<fixed<<right<<price<<" lv\n";
}

int main(){
    double s1{56.234};
    double s2(1.34);
    printBill("HeadPhones", s1);
    printBill("Pensil", s2);
    printBill("Total", s1+s2);
    
	
}
