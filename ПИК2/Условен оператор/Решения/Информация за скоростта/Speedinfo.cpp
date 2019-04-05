#include <iostream>
#include <string>
using namespace std;
int main()
{
            double n;
            cin>>n;
            if (n <= 10) cout<<"slow";
            else if (n <= 50) cout<<"average";
            else if (n <= 150) cout<<"fast";
            else if (n <= 1000) cout<<"ultra fast";
            else cout<<"extremely fast";
system ("pause");
return 0;
}

