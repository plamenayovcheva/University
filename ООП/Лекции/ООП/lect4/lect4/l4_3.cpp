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

class ExhibitionCat:public Cat{
	int numPrizes;
	public:
	ExhibitionCat(int n, string name="Tomi", 
	      string breed="siamec", int age=1):Cat(name, breed,age){
	      	  numPrizes=n;
		  }	
    int getNumPrizes()	{
    	 return  numPrizes;
	}	  
};

int main(){
	ExhibitionCat ec1(5);
	ec1.say();
	cout<<ec1.getNumPrizes()<<endl;
	
}
