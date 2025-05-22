#include<iostream>
using namespace std;
class Demo{
    public:
    void show();
};
void Demo::show(){
    cout<<"hello from Demo class"<<endl;
}
int main(){
    Demo d;
    d.show();
    return 0;
}