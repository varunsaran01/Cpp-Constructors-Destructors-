/* 
PRN 22070123130
Exp-12(Part-F)
*/
#include<iostream>
using namespace std;
int count = 0;
class destruct
{
public:
destruct()
{
    count++;
    cout<<"The count is:"<<count<<endl;
}
~destruct()
{
    count--;
    cout<<"The count is:"<<count<<endl;
}
};
int main()
{
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
}
/*Output
The count is:1
The count is:2
The count is:3
The count is:4
The count is:3
The count is:2
The count is:1
The count is:0
*/
