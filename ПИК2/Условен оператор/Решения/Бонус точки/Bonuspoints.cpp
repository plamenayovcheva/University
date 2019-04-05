#include <iostream>
#include <string>
using namespace std;
int main()
{
            int n;
            cin>>n;
            double bonus = 0;
            if (n <= 100) 
            bonus = 5;
            else if (n < 1000)
            bonus = n * 0.20;
            else bonus = n * 0.10;
            if (n % 2 == 0) 
            bonus++; 
            if (n % 10 == 5)
            bonus += 2;
            cout<<bonus<<endl;
            cout<<n + bonus<<endl;
system ("pause");
return 0;
}
