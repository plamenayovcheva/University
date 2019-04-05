#include <iostream>     
#include <algorithm>    
#include <vector>
using namespace std;  
bool IsOdd (int i) 
{   
    return ((i%2)==1);
}
int main () {
   vector<int> v;
   for(int i=1;i<20;i++) v.push_back(i);  //v: 1 2 3 4 5 6 7 8 9
   int mycount = count_if (v.begin(), v.end(), IsOdd);
   cout << "myvector contains " << mycount  << " odd values.\n";
return 0;
} 
