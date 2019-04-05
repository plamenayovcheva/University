#include <iostream>
#include <string>
using namespace std;
int main()
{
        int volume,pipe1,pipe2;
        cin>>volume;
        cin>>pipe1;
        cin>>pipe2;
        double hours;
        cin>>hours;
        double water = pipe1 * hours + pipe2 * hours;
        int a;
        a=pipe1 * hours / water * 100;
        int b;
        b=pipe2 * hours / water * 100;

        if (water <= volume)
        {
            cout<<"The pool is"<< water / volume * 100<<"% full. Pipe 1: "<<a<<"%. Pipe 2: "<<b<<"%."<<endl;
        }
        else
        {
             cout<<"For "<<hours<<" hours the pool overflows with "<< water - volume<<" liters."<<endl;
        }
system ("pause");
return 0;
}

