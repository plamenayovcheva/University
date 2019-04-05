#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
            int n ; cin>>n;
            int br = 1; 
            for(int k=1;k<=n;k++)
            {
                int temp = k;
                for(int j=br; temp > 0;j++,temp--)
                {                    
                    cout<<j << " ";
                    if (j == n) return br;
                    br++;
                }
                cout<<endl;;
            }
system ("pause");
return 0;
}
