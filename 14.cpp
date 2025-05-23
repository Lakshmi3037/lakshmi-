#include<iostream>
using namespace std;
class Demo
{
    public:
    Demo()
    {
        cout<<"constructor called!"<<endl;
    }
    ~Demo()
    {
        cout<<"destructor called!"<<endl;
    }
};
int main()
{
    Demo d1;
    return 0;
}