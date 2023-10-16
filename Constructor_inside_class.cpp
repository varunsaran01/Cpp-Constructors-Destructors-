/*  
PRN - 22070123130
Exp-12(Part-B)
Defining the constructor inside the class*/
#include<iostream>
using namespace std;
class date
{
    int d;
    int m;
    int y;

    public:
    date()
     {
        cout<<"enter the date:";
        cin>>d;
        cout<<"enter the month:";
        cin>>m;
        cout<<"enter the year:";
        cin>>y;
    }
void display()
{
    cout<<endl<<d<<"\t"<<m<<"\t"<<y;
}
};
int main()
{
    date d2;
    d2.display();
    
}
/*Output
enter the date:24
enter the month:8
enter the year:20

24/8/20
*/
