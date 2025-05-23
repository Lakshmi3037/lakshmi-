#include<iostream>
using namespace std;
class student
{
    public:
    string name,collage;
    int age, usn;
    student(string n,int a,int u,string c)
    {
        name=n;
        age=a;
        usn=u;
        collage=c;
        cout<<"name:"<<name<<",age:"<<age<<",usn:"<<usn<<",collage:"<<collage<<endl;
    }
};
int main()
{
    student s1("pavan",21,031,"cec");
    student s2("lakshmi",18,031,"cec");
    student s3("shalini",19,034,"cec");
    return 0;
}
