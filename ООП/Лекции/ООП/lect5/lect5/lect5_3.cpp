#include <iostream>
#include <string>
using namespace std;


template <typename T>
class Stack{
	private:
	  enum {SIZE=4};  // razmer na steka
	  T list[SIZE];	
	  int top; // vryh na steka, svobodna poziciya
	public:
	  Stack(){
	  	top=0; // zapochvame ot 0 element na masiva
	  }
	  bool isEmpty(){
	  	 return top==0;
	  }
	  bool isFull(){
	  	return top==SIZE;
	  }
	  //vmykva element v steka
	  bool push(T element){
	  	if(!isFull()){
	  	  	list[top++]=element;
	  	  //	cout<<element <<" e dobaven \n";
	  	      cout<<element.toString() <<" e dobaven \n";
	  	  	return true;
		}
		else{
		//	cout<<element <<" NE e dobaven \n";
		  cout<<element.toString() <<"Ne e dobaven \n";
			return false;
		}
	  }
	  
	  //izvlicha element ot steka
	  bool pop(T& element){
	  	 if(!isEmpty()){
	  	     element=list[--top];
			 return true;  	
		 }
		 else{
		 	return false;
		 }
	  } 
};

class Person{
	string name;
	int yb; //year Born 
	public:
		Person():name("Ivan"), yb(1997){
		}
		Person(string n, int _yb):name(n), yb(_yb){
		}
		string toString(){
			return "Ime:"+name+" godina na razdane:"
			 + to_string(yb);
		}
};
int main(){

	// masiv ot lica
	Person si[5]={Person(),
	              Person("Gabriela", 1998),
	              Person("Kamelia", 1999),
		          Person("Ekaterina", 2000),
				  Person("Alex", 1997)
				  };
  
   Stack<Person> pSt;
   
   for(int i{0}; i<5; i++){
   	  pSt.push(si[i]);
   }
	
}

