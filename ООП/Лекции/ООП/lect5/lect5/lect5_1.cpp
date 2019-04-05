#include<iostream>
#include <clocale>
#include <string>
using namespace std;
// shablon na funkciya
template <typename T>
T Min(T array[], int n){
	T result= array[0];
	for (int i{1}; i<n; i++){
		if(array[i]<result) result= array[i];
    }   
    return result;
}


int main(){
	setlocale(LC_ALL, "Bulgarian");
	
	double nums[5]{ 2.5, 3.9, 1.2, 7.1, -2.1};
	cout<<Min(nums, 5)<<endl;
	cout<<Min<double>(nums, 5)<<endl;
	
	string names[4]{"Васил", "Лили", "Ани", "Анелия"};
	cout<<Min(names, 4)<<endl;
}
