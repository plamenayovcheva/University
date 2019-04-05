#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
            int n; cin>>n;
            int sum = 0, max = -1000000;
            for (int i = 0; i < n; i++)
            {
                int k ; cin>>k;
                if (k > max) max = k;
                sum = sum + k;
            }
            sum = sum - max;
            if (sum  == max)
            cout<<"Yes\nSum = "<< sum;
            else cout<<"No\nDiff = "<<abs(sum - max);

system ("pause");
return 0;
}
