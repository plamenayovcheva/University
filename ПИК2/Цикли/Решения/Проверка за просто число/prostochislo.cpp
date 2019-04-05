#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
            int n; cin>>n;
            if(n <= 1)
            {
                cout<<"Not Prime";
               
            }
            bool prime = true;
            for (int k = 2; k <= sqrt(n); k++) // fix(1): K<N = K<SQRT(N)
                if (n % k == 0)
                {
                    prime = false;
                    break; // fix(2): DO NOT TEST OTHER NUMBERS!
                }            
            if (prime) cout<<"Prime";
            else cout<<"Not Prime";
system ("pause");
return 0;
}
