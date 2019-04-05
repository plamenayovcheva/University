#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{ 
        int n; cin>>n;
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;
        int p4 = 0;
        int p5 = 0;
        for (int i = 0; i < n; i++)
        {
            int num; cin>>num;
            if (num < 200) p1++;
            else if (num < 400) p2++;
            else if (num < 600) p3++;
            else if (num < 800) p4++;
            else p5++;
        }

        int p1Percentage = p1 * 100.0 / n;
        int p2Percentage = p2 * 100.0 / n;
        int p3Percentage = p3 * 100.0 / n;
        int p4Percentage = p4 * 100.0 / n;
        int p5Percentage = p5 * 100.0 / n;
        cout<<setprecision(2)<<fixed;   
        cout<<p1Percentage<<"%"<<endl;
        cout<<setprecision(2)<<fixed;   
        cout<<p2Percentage<<"%"<<endl;
        cout<<setprecision(2)<<fixed;   
        cout<<p3Percentage<<"%"<<endl;
        cout<<setprecision(2)<<fixed;   
        cout<<p4Percentage<<"%"<<endl;
        cout<<setprecision(2)<<fixed;   
        cout<<p5Percentage<<"%"<<endl;
system ("pause");
return 0;
}

