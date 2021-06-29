#include<iostream>
using namespace std;
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a=*b;
    *b = temp;
}
int main(){
int x = 5 , y = 8;
cout<<"print the number before swapping:"<<x<<"the number beforeswapping"<<y<<endl;
swapPointer(&x ,&y);
cout<<"print the number after swapping:"<<x<<"the number after swapping"<<y<<endl;
return 0;
}


