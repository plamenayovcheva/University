#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{ 
        int n ; cin>>n;
        double divisibleBy2 = 0.00;
        double divisibleBy3 = 0.00;
        double divisibleBy4 = 0.00;

        for (int i = 0; i < n; i++)
        {
            int currentNumber; cin>>currentNumber;

            if (currentNumber % 2 == 0)
            {
                divisibleBy2++;
            }
            if (currentNumber % 3 == 0)
            {
                divisibleBy3++;
            }
            if (currentNumber % 4 == 0)
            {
                divisibleBy4++;
            }
        }
         cout<<setprecision(2)<<fixed;   
        cout<<divisibleBy2 / n * 100<<"%"<<endl;
        cout<<setprecision(2)<<fixed;   
        cout<<divisibleBy3 / n * 100<<"%"<<endl;
        cout<<setprecision(2)<<fixed;   
        cout<<divisibleBy4 / n * 100<<"%"<<endl;
      
system ("pause");
return 0;
}

