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
	  	  	cout<<element <<" e dobaven \n";
	  	  	return true;
		}
		else{
			cout<<element <<" NE e dobaven \n";
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

int main(){
	Stack<char> lSt;
/*	lSt.push('a');
	lSt.push('b');
	lSt.push('c');
	lSt.push('d');  */
	
	for(int i{0}; i<4; i++){
		lSt.push('a'+i);
	}
	
	char letter;
	while(!lSt.isEmpty()){
		lSt.pop(letter);
		cout<<letter<<endl;
	}
	
	string names[4]{"Ana", "Petyr", "Maria", "Ivan"};
	Stack<string> sSt;
	for(int i{0}; i<4; i++){
		sSt.push(names[i]);
	}
	
	string name;
	while(!sSt.isEmpty()){
		sSt.pop(name);
		cout<<name<<endl;
	}
	
	
}

