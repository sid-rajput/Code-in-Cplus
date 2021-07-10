#include <iostream>
#include<string>
using namespace std;
class student{
public:
     string name ;
     int r_num;
     char sec;
     void enter(string name , int r_num, char sec , char grade , int adm_num );
       void read(void);
private:
     char grade ; int adm_num;


      };
void student :: enter(string s1 , int r_n , char sec1 , char grde , int adm_n ){
     name= s1;
     r_num = r_n;
     sec = sec1;
     grade = grde;
     adm_num = adm_n;
}
void student:: read(void){
cout<<"Name:  "<<name<<endl;
cout<<"roll number:  "<<r_num<<endl;
cout<<"sec  "<<sec<<endl;
}

int main()
{
student saurabh;
saurabh.enter("Saurabh" , 1  , 'A' ,' B ', 112);
saurabh.read();

return 0;


}


