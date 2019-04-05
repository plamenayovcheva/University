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
    int main() {
	
    // Създаваме първи обект инстанция на класа
            Person Ivan;
            Ivan.Name = ("Ivan Ivanov");
            Ivan.Age = 23;
            Ivan.IntroduceYourself();

            // Създаваме втори обект инстанция на класа
            Person Pesho;
            Pesho.Name = ("Peter Petrov");
            Pesho.Age = 6;
            Pesho.IntroduceYourself();
}
