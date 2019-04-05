#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
            int n; cin>>n;
            int step2 = 1;
            while (n >= 0)
            {
                cout<<step2<<endl;
                step2 *= 4;
                n-=2;
            }
system ("pause");
return 0;
}

