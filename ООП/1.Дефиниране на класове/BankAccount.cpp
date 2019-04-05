#include <iostream>
#include <string>
using namespace std;
class Person
    {
        public:
		string Name;
        int Age;
		public:
		void set_Name(string person_Name)
		{
		Name=person_Name;	
		}
		string get_Name()
		{
		return Name;
		}
		void set_Age(int person_Age)
		{
		Age=person_Age;	
		}
		int get_Age()
		{
		int Age;
		}
		
        void IntroduceYourself()
        {
            cout<<"I am "<<Name<<" and my age is "<<Age<<"."<<endl;
        }
    };
class BankAccount
    {
    	public:
    	
        int id;
        int ID;
        double balance;
        double Balance;
        void set_ID(int backaccount_ID)
		{
		ID=backaccount_ID;	
		}
		int get_ID()
		{
		int ID;
		}

        void set_Balance(int backaccount_Balance)
		{
		ID=backaccount_Balance;	
		}
		int get_Balance()
		{
		int Balance;
		}
		void bankAccount()
        {
            cout<<"ID = ";
            cin>>id;
            cout<<"Balance = ";
            cin>>balance;
            
        }
    };
int main() {
	
    // Създаваме първи обект инстанция на класа
            Person Ivan;
            BankAccount id;
            Ivan.Name = ("Ivan Ivanov");
            Ivan.Age = 23;
            Ivan.IntroduceYourself();
            id.bankAccount();
            
    // Създаваме втори обект инстанция на класа
            Person Pesho;
            BankAccount id1;
            Pesho.Name = ("Peter Petrov");
            Pesho.Age = 6;
            Pesho.IntroduceYourself();
           	id1.bankAccount();
          	id1.bankAccount();
}
