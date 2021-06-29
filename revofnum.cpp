#include<iostream>
using namespace std;
int main()
{
    cout<<"reverse of a number"<<endl;
    cout<<"Enter the num:";
    long int a ,  f, rev =0;
    cin>>a;

   while(a>0)
   {
      f=a%10;
      rev=rev*10+f;
      a = a/10;


   }
   cout<<endl;
   cout<<"rev number"<<rev;
   return 0;
}
