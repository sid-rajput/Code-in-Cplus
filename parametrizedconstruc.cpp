#include<iostream>
using namespace std;
class point{
float x , y  ;
public:
     point(float a , float b){
     x=a;
     y=b;
     }
     void display(){
     cout<<"First point are:  "<<x<<"  "<<y<<endl;

     }
    point Sumpoints(point n) {
     float xsum = x + n.x;
     float ysum = y + n.y;
     point tmp(xsum, ysum) ;
     return tmp;

}


};
 int main(){
 point a(7 , 9);
 a.display();
 point b(8 , 9);
 b.display();
 point c(0 , 0);
 c = a.Sumpoints(b);
 c.display();
 }
