#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
        double vineyardArea,grapePerSquare, neededLiters;
        cin>>vineyardArea;
        cin>>grapePerSquare;
        cin>>neededLiters;
        int workers;
        cin>>workers;
        double harvestPerVine = (vineyardArea * grapePerSquare) * 0.4;
        double vine = harvestPerVine / 2.5;
        if (vine >= neededLiters)
        {
            double vineLeft = vine - neededLiters;
            cout<<"Good harvest this year! Total wine: "<<vine<<" liters.";
            cout<<vineLeft<<" liters left -> "<<vineLeft / workers<<" liters per person.";
        }
        else
        {
            cout<<"It will be a tough winter! More "<<neededLiters - vine<<" liters wine needed.";
        }
system ("pause");
return 0;
}

