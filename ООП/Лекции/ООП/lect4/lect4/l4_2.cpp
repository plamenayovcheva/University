#include <iostream>
#include <string>
using namespace std;

class Cat{
	string name;
	string breed; //poroda
	int age;
  public:
	Cat ( string name="Tomi", 
	      string breed="siamec", int age=1 )
	{
	    this->name=name;
	    this->breed=breed;
	    this->age=age;  
	}
	void say(){
		cout<<breed<< " cat "<<name
		<<" says meow\n";
	}
	
		
};

int main(){
	Cat c1;
	c1.say();
	
	Cat c2("Lisa");
	c2.say();
	
	Cat c3("Maxi","agrorska");
	c3.say();
	
}
