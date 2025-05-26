#include<iostream>
using namespace std;
class shape
{
    public:
    void setcolor(string c)
    {
        cout<<"setting color:"<<endl;
    }
};
class circle:public shape
{
    public:
    void drawcircle()
    {
        cout<<"drawing circle."<<endl;
    }
};
class rectangle:public shape 
{
    public:
    void drawrectangle()
    {
        cout<<"drawing rectangle"<<endl;
    }
};
int main()
{
    rectangle r;
    circle c;
    r.setcolor("pink");
    r.drawrectangle();
    c.setcolor("blue");
    c.drawcircle();
    return 0;
}
