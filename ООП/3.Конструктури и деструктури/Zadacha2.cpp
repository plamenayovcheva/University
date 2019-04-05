#include <iostream>
#include <iomanip>
using namespace std;
int k;
	class student{
	private:
		int nomer;
		char *name;
		char *spec;
		double ocenka[15];
		double sr_uspeh;
	public:
		student();
		~student();
		void show();
		double get_uspeh();
	};
	student::student()
	{
		char correct='n';
		while (correct=='n' || correct == 'N') 
		{
			cout<<"Vuvedi nomer:";
			cin>>nomer;
			name=new char[20];
			cout<<"Vuvedi ime:";
			cin>>name;
			spec=new char[20];
			cout<<"Vuvedi specialnost:";
			cin>>spec;
			cout<<endl;
			sr_uspeh=0;
			for (int i=1; i<=k; i++)
			{
				do
				{
					cout<<i<<" ocenka ";
					cin>>ocenka[i];
					cout<<endl;
				}
				while (ocenka[i]<2||ocenka[i>6]);
				sr_uspeh=sr_uspeh+ocenka[i];
			}
			sr_uspeh=sr_uspeh/k;
			cout<<"Sreden uspeh na uchenika:"<<setiosflags(ios::fixed)<<setprecision(2)<<sr_uspeh<<endl;
			cout<<"Korektni li sa dannite? Y/N :";
			cin>>correct;
			cout<<endl;
		}
	}
	student::~student()
	{
		delete name;
		delete spec;
		cout << "Object destructed" << endl;
	}
	void student::show()
	{
		cout<<setiosflags(ios::left);
		cout<<setw(3)<<nomer<<setw(2)<<" "<<setw(20)<<name<<setw(2)<<" "<<setw(20)<<spec<<setw(2)<<" ";
		for(int i=1;i<=k;i++) 
		{
			cout<<setw(4)<<ocenka[i]<<" ";
		}
		cout<<setw(8)<<setiosflags(ios::fixed)<<setprecision(2)<<sr_uspeh;
		cout<<endl;
	}
	double student::get_uspeh()
	{
		return sr_uspeh;
	}
	void show_a()
	{
		cout<<setiosflags(ios::left);
		cout<<setw(3)<<"N"<<setw(2)<<"Ime na studenta "<<setw(2)<<" Specialnost "<<setw(2);
		for (int i=1; i<=k; i++)
		{
			cout<<"O["<<i<<"]"<<" ";
		}
		cout<<setw(8)<<"sreden uspeh"; 
		cout<<endl<<endl;
	}
	void sort(student** pp, int n)
	{
		void order(student**, student**);
		int j,k;
		for ( j=1; j<n-1; j++)
		for ( k=1; k<n; k++)
		order(pp+j, pp+k);
	}
	void order (student** pp1, student** pp2)
	{
		if((*pp1)->get_uspeh()< (*pp2)->get_uspeh())
		{
			student* temp=*pp1;
			*pp1=*pp2;
			*pp2=temp;
		}
	}
	int main()
	{
		int br;
		do 
		{
			cout<<"Vuvedu broq na studentite ";
			cin>>br;
		} while(br<1);
		do
		{
			cout<<"Vuvedu broq na ocenkite ";
			cin>>k;
		} while (k<3||k>20);
		cout<<endl;
		student* U=new student[br];
		student** pU= new student*[br];
		cout<<endl<<endl;
		show_a();
		for(int i=1;i<=br-1;i++) 
		{
			U[i].show();
			cout<<endl;
			pU[i]=&U[i];
		}
		cout<<endl<<endl;
		cout<<"Sortirane "<<endl;
		sort(pU, br);
		show_a();
		for(int i=1;i<=br-1;i++) 
		{
			pU[i]->show();
			cout<<endl;
		}
	}
