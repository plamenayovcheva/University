#include <iostream> 
#include <vector> 
using namespace std; 
vector <int> V1; 
vector <int> V2; 
vector<int>Result; 

vector<int> Merge(vector<int>V1,vector<int>V2){ 
vector<int>Result; 
for(int i=0;i<V1.size();i++){Result.push_back(V1[i]);Result.push_back(V2[i]);} 
return Result; 
} 

int main(){ 
int Temp; 
int size; 
cin>>size; 
for(int i=0;i<size;i++){cin>>Temp;V1.push_back(Temp);} 
for(int i=0;i<size;i++){cin>>Temp;V2.push_back(Temp);} 
Result=Merge(V1,V2); 
for(int i=0;i<Result.size();i++){cout<<Result[i]<<" ";} 
cout<<endl; 
system("pause"); 
return 0; 
}
