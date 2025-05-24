#include<iostream>
using namespace std;
class person
{
private:
    string name;
    int age;
    public:
    void setdata(string n,int a)
    {
        name=n;
        age=a;
    }
    void displaydata()
    {
        cout<<"name:"<<name<<",age:"<<age<<endl;
    }
};
int main()
{
   person  p1; 
   p1.setdata ("alice",18);
   p1.displaydata();
   return 0;
}
    