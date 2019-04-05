#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{ 
            int a,b;   cin>> a;
            cin>> b;
            while (a != b)
            {
                if (a > b) a = a - b;
                else b = b - a;
            }
            cout<<a;
system ("pause");
return 0;
}
