#include <iostream>
#include <cstring>
using namespace std;

class Point {
 //chlen-danni (poleta)
   int x,y;
  public:
   // otkriti chlen-funkcii
   void set(int _x, int _y) {
      x=_x;
      y=_y;
   }
   void show() {
      cout<<"("<<x<<","<<y<<")\n";
   }
   //getteri
   int getX(){return x;}
   int getY(){return y;}
};

int main(){
    Point p1;
    p1.show(); // neinicializirana
    p1.set(2,5);
    p1.show(); // OK
    cout<<"x="<<p1.getX()<<endl;
    cout<<"y="<<p1.getY()<<endl;

    //ukazatel
    Point* p2= new Point();
    p2->set(6,7);
    p2->show();
    cout<<"x="<<p2->getX()<<endl;
    cout<<"y="<<p2->getY()<<endl;

}
