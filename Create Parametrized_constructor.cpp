/* 
PRN - 22070123130
Exp-12(Part-D)
Write the parametrised constructor*/
#include<iostream>
using namespace std;
class construct{
    int a,b;
    public:
    construct(int m,int n)
    {
        a = m;
        b = n;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
int main()
{
    construct p(10,20);
    p.display();
}
/*Output
a=10
b=20
*/
