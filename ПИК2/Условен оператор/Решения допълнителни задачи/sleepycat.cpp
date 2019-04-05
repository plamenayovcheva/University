#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
        int holidays;
        cin>>holidays;
        int workingDays = 365 - holidays;
        int totalPlayMinutes = (workingDays * 63) + (holidays * 127);
        int difference = totalPlayMinutes - 30000;
        int hours = abs(difference / 60);
        int minutes = abs(difference % 60);

        if (totalPlayMinutes > 30000)
        {
            cout<<"Tom will run away ";
            cout<<hours<<" hours and "<<minutes<<" minutes more for play";
        }
        else 
        {
            cout<<"Tom sleeps well ";
            cout<<hours<<" hours and "<<minutes<<" minutes more for play";
        }
system ("pause");
return 0;
}
