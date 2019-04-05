#include <iostream>
#include <string>
using namespace std;
int PrintSign(int n)
{
    if (n > 0)
        cout<<"The number "<< n<< " is positive"<<endl;
    else if (n < 0)
        cout<<"The number "<< n<< " is negative."<< endl;
    else
        cout<<"The number "<< n<< " is zero."<<endl;
}
int main()
{
    int n;
    cin>>n;
    PrintSign(n);
    return 0;
}
