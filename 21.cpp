#include<iostream>
using namespace std;
class book
{
    public:
    string title;
    string author;
    float price;
    book(string t,string a,float p):title(t),author(a),price(p){}
    void display()
    {
        cout<<"title:"<<title<<"author:"<<author<<",price:$"<<price<<endl;
    }
};
int main()
{
    book b("c++ programming","author name",29.99);
    b.display();
    return 0;
}