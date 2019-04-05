#include <iostream>
#include <string>
#include <vector>
#include <map>
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
   
    vector<int> nums{2,6,7,9};
    print(nums);
    
    map<string, string> dict {{"kotka", "cat"}, {"kuche", "dog"}};
    print(dict);
    
    //vector
    cout<<nums[0]<<endl;
    // dobavyane v kraya
    nums.push_back(15); // v kraya, byrzo
    nums.insert(nums.begin()+1, 17);  
    print(nums);
	
	// map
	dict["kon"]="horse";
	dict.insert(pair<string, string>("zaek", "rabbit"));
	dict.insert(pair<string, string>("lyv", "lion"));
	print(dict);
	
	
}
