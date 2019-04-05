#include <iostream>
#include "bankaccount.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	BankAccount my;
	int choice;
	do
   {
   
	cout<<"1.Put\n2.Take\n3.Display\n4.Exit\n";
	cout<<"Select:";
	cin>>choice;
	int cash;
	
	switch (choice){
		case 1: 
			cout<<"How much to deposit?";
			cin>>cash;
			my.deposit(cash);
			my.display();
			break;
		case 2:
			cout<<"How much to withdrow?";
			cin>>cash;
			my.withdraw(cash);
			my.display();
			break;
		case 3:
			my.display();
			break;
		case 4:
			cout<<"Bye!\n";
			break;
	    default:
	    	cout<<"Invalid choice. Correct it!\n";
	}
	}
	
	while (choice  != 4);
	
	return 0;
}
