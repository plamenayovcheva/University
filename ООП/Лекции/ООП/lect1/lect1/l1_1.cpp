#include <iostream>
#include <cstring>
using namespace std;


struct Student{
   char name[20]; //ime
   int age;  //4B
   double grade;//8B
};
void show(Student s);//prototip

int main(){
  //Definirane na prom. ot tip struct
  Student s1{};
  Student s2{"Dimityr", 19, 5.3};

  //dostyp do chlen-dannite na strukturata
  cout<<"Danni za student 2:\n";
  cout<<"Ime:"<<s2.name
      <<" Godini:"<<s2.age
      <<" Uspeh:"<<s2.grade<<endl;

   cout<<"Pamet, zaemana ot prom. Student:"
       <<sizeof(s1)<<" B\n";

   //Zadavane na danni za s1
    strcpy(s1.name, "Kamelia");
    s1.age=18;
    s1.grade=5.6;

    cout<<"Danni za student 1:\n";
   cout<<"Ime:"<<s1.name
      <<" Godini:"<<s1.age
      <<" Uspeh:"<<s1.grade<<endl;


   // cout<<s1;
   //Agregatni operacii sys strukturi
   //1. Prisvoyavane
   Student s3;
   s3=s2;
   Student s4=s1;
   //2. Predavane na parametyr na funkciq

   show(s3);
   show(s2);
   show(s4); show(s1);

   // prodylzenie
   Student* s5= new Student;
   strcpy(s5->name, "Nikolai");
   s5->age=20;
   s5->grade=5.5;

   show(*s5);



}
void show(Student s){
   cout<<s.name<<", "
       <<s.age<<", "
       <<s.grade<<"\n";
}
