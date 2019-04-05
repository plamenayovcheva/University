#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
        double budget; cin>>budget;
        string season; cin>>season;
        double spend;
        if (budget <= 100)
        {
            cout<<"Somewhere in Bulgaria"<<endl;
            if (season == "summer")
            {
                spend = budget * 0.3;
                cout<<"Camp - "<<setprecision(2)<<fixed<<spend<<endl;
            }
            else
            {
                spend = budget * 0.7;
                cout<<"Hotel - "<< setprecision(2)<<fixed<<spend<<endl;
            }
        }
        else if (budget <= 1000)
        {
            cout<<"Somewhere in Balkans"<<endl;
            if (season == "summer")
            {
                spend = budget * 0.4;
                cout<<"Camp - "<<setprecision(2)<<fixed<<spend<<endl;
            }
            else
            {
                spend = budget * 0.8;
               cout<<"Hotel - "<<setprecision(2)<<fixed<<spend<<endl;
            }
        }
        else
        {
            cout<<"Somewhere in Europe"<<endl;
            spend = budget * 0.9;
            cout<<"Hotel - "<<setprecision(2)<<fixed<<spend<<endl;
        }
system ("pause");
return 0;
}

