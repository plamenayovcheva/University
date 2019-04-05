#include <iostream>
#include<fstream>
using namespace std;

int main(){
    // fail za zapis
     ofstream fout("a.dat"); // obekt failov potok
     int marks[5]{5,6, 6, 3, 3};
     for(int m: marks) fout<<m<<" ";  //zapis 
     fout.close();
     
     // fail za chetene
     ifstream fin("a.dat");
     int marks1[5], i{0};
     
     if(fin.is_open()){
     	
     	while(!fin.eof()){
     		fin>>marks1[i++];
		 }
     	
	 }
	 cout<<"Procheteni\n";
     for(auto el:marks1) cout<<el<<" ";
     
     //Ivan, Valentin, Miroslav, Alex, Hidaet, Gabriela, Ekaterina, Kamelia
	
}
