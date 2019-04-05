#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
            string type;
            cin>>type;
            double rows,cols;
            cin>>rows;
            cin>> cols;
            double sum;
            sum= rows * cols;
            if (type == "premiere") sum *= 12.00;
            if (type == "normal") sum *= 7.50;
            if (type == "discount") sum *= 5.00;
            cout<< setprecision(2) << fixed;   
    		cout<< sum<< endl;
system ("pause");
return 0;
}
