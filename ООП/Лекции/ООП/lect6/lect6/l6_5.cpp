#include <iostream>
#include<sstream>
using namespace std;



int main(){
    //nizov potok za zapis v pametta
    // analog na cout
    ostringstream sout;
    sout<<"ime ";
    string name{"Gabi"};
    sout<<name <<" age:"<<20<<endl;
    string all=sout.str();
    cout<<all<<endl;
    
    //nizov potok za chetene ot pametta, analog na cin
    
    istringstream sin;
    sin.str("25.10.2017");
    int day, month, year;
    char comma;
    sin>>day>>comma>>month>>comma>>year;
    cout<<"den:"<<day<<" mesec:"<<month<<" godina:"<<year<<endl;
    
	
}
