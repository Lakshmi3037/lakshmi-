#include<iostream>
using namespace std;
class calculator{
    public:
    int add(int a,int b);
    int subtract(int a,int b);
};
int calculator::add(int a,int b){
    return a+b;
}
int calculator::subtract(int a,int b){
    return a-b;
}
int main(){
    calculator calc;
    cout<<"add:"<<calc.add(10,5)<<endl;
    cout<<"subtract:"<<calc.subtract(10,5)<<endl;
    return 0;
}