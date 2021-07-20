#include <iostream>

using namespace std;
class area{
     int x , y , c , d;
public:
     area(){
          x = 10;
          y = 20;
          c= 2*(x+y);
          d = x*y;
}
 void Display(){
 cout<<"Perimeter is: "<<c<<" Area is:  "<<d<<endl;
 }
};
int main()
{
    area cube;
    cube.Display();
    return 0;
}
