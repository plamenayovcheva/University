#include <iostream>
using namespace std;

struct point{
	int x, y;
};
void show(point p){
	cout<<"("<<p.x<<","
	    <<p.y<<")\n";
}

int main(){
	point p{1,3};
	show(p);
}
