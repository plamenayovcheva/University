#pragma once
class BankAccount{
	int amount;
	int ID;
	static int current_ID;
	public:
	  BankAccount();
	  void deposit(int a);
	  void withdraw(int a);
	  void display() const;
	  static int get_current_ID() ;
};

