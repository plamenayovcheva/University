#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
            int n; cin>>n;
            // sumi
            double even = 0, odd = 0;
            // chetem N na broi chisla
            for (int i = 0; i < n; i++)
            {
                int k ; cin>>k;
                if (i % 2 == 0) even += k;
                else odd += k;
            }
            if (odd == even)
                cout<<"Yes\nSum = "<< odd;
            else
                cout<<"No\nDiff = "<<abs(odd - even);
system ("pause");
return 0;
}

