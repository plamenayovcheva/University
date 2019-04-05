#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
            int n;  cin>>n;
            long min = 100000000;
            for (int i = 0; i < n; i++)
            {
                int k;  cin>>k;
                if (k < min) min = k;
            }
            cout<<min;

system ("pause");
return 0;
}

