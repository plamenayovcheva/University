#include <iostream>
#include <string>
using namespace std;
int main()
{
            //Sumirane na sekundi
            int a,b,c,s;
            cin>>a;
            cin>>b;
            cin>>c;
            s = a + b + c;
            // obshto vreme
            if (s < 60) cout<<"0:";
            else if (s < 120)
            {
                cout<<"1:";
                s -= 60;
            }
            else
            {
                cout<<"2:";
                s -= 120;
            }
            if (s < 10) cout<<"0" << s;
            else cout<<s;

system ("pause");
return 0;
}
