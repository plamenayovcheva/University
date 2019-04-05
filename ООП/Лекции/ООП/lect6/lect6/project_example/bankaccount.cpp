#include <iostream>
#include "bankaccount.h"
using namespace std;

int BankAccount::current_ID{1111};

	  BankAccount::BankAccount():amount(1000), ID(current_ID){
	  	current_ID++;
	  }
	  void BankAccount::deposit(int a){
	  	 amount+= a;
	  }
	  void BankAccount::withdraw(int a){
	  	if(amount>=a){
	  		amount-=a;
		}
		else {
			cout<<"you don't have that much money on account\n";
		}
	 
}
	  	
	  void BankAccount::display() const{
	  	 cout<<"ID:"<<ID<<" amount:"<<amount<<endl;
     }
	  	
	   int BankAccount::get_current_ID(){
	  	return current_ID;
}

