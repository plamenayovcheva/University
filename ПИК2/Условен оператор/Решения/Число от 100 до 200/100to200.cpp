#include <iostream>
#include <string>
using namespace std;
int main()
{
            int n; cin>>n;
            if (n < 100)
            {
                cout<<"Less than 100";
            }
            else if (n <= 200)
            {
                cout<<"Between 100 and 200";
            }
            else
            {
                cout<<"Greater than 200";
            }

system ("pause");
return 0;
}
