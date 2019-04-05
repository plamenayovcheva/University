#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// izvezda vector> <int>
void print(vector<int> v){
	for(auto it=v.begin(); it<v.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

void print(map<string, string> m ){
	for(auto it=m.begin(); it!=m.end(); it++){
		cout<<it->first <<" -> "<<it->second <<endl;
	}
}

int main(){
   
     vector <int> v{6,7,11,9, 6};
     auto it = find(v.begin(), v.end(),11 );
     if(it != v.end()){
     	cout<<"namereno v "<<it -v.begin()<<" poziciya\n";
	 }
	
	//  predikat
	it= find_if(v.begin(), v.end(), [](int x){ return x>5;
	});
	 if(it != v.end()){
     	cout<<"namereno v "<<it -v.begin()<<" poziciya\n";
	 }
	
}
