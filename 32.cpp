#include <iostream>
using namespace std;
class camera
{
    public:
    void takephoto()
    {
        cout<<"taking photo..."<<endl;
    }
};
class phone
{
    public:
    void makecall()
    {
        cout<<"making a cell..."<<endl;
    }
};
class smartphone:public camera,public phone
{
    public:
    void browseinternet()
    {
        cout<<"browsing internet..."<<endl;
    }
};
int main()
{
    smartphone s;
    s.takephoto();
    s.browseinternet();
    return 0;
}