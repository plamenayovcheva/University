#include <iostream>
#include <string>
using namespace std;
double FahrenheitToCelsius(double degrees)
{
    double celsius = (degrees - 32) * 5 / 9;
    return celsius;
}

int main()
{
    cout<<"Temperature in Fahrenheit: "<<endl;
    double t;
    cin>>t;
    t = FahrenheitToCelsius(t);
    cout<<"Temperature in Celsius: "<< t<<endl;
    return 0;
}
