#include <iostream>

using namespace std;

class employee{
private:
int salary , bonus ;
public:
string name ;
int emp_id ;
void setData(int salary , int bonus);
void getData()
{
cout<<"The value of salary: "<<salary<<endl;
cout<<"The value of bonus: "<<bonus<<endl;
cout<<"The value of name: "<<name<<endl;
cout<<"The value of emp_id: "<<emp_id<<endl;
}
};
void employee :: setData(int s1 , int b1){
     salary = s1;
     bonus = b1;
}
int main(){
employee frst;
frst.setData(1000000 ,4000);
frst.name = "Saurabh";
frst.emp_id = 101;
frst.getData();
return 0;
}
