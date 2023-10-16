/*  
PRN - 22070123130
Exp-12(Part-C)
Defining the constructor outside the class*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student();
    void display();
};
student::student()
{
     cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
}
void student::display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
int main()
{
    student s;
    s.display();
    
}
/*Output
enter the rollno:12308
enter the name:Seema
enter the fee:30000

12308
Seema
30000

*/
