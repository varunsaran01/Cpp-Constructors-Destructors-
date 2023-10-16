/*  
 22070123092
Exp-12(Part-A)
Default constructor*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student()
    {
        cout<<"enter the rollno:";
        cin>>rollno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the fee:";
        cin>>fee;
    }

void display()
{
    cout<<endl<<rollno<<"\n"<<name<<"\n"<<fee;
}
};
int main()
{
    student s;
    s.display();
    
}
/*
Output
enter the rollno:12308
enter the name:Seema
enter the fee:20000

12308
Seema
20000
*/
