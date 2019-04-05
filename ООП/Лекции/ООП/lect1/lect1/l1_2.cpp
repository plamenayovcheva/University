#include <iostream>
#include <cstring>
using namespace std;

struct point{
   int x,y;
};

class Point {
   int x,y;
};

int main(){
   point p1;
   p1.x=2;

   Point p2;// obekt ot klas Point
//   p2.x=12;  //ne

   point p3{1,7}; // OK
   Point p4{1,6};  // Ne

}
