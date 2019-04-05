#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
            int n; cin>>n;
            int k = 0;
            while( k <= n )
            {
                k = 2 * k + 1;
                if(k <= n) cout<<k<<endl;
            }

system ("pause");
return 0;
}
