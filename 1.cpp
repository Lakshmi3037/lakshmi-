#include<iostream>
using namespace std;
 class book
 {
    public:
       string title;
       string auther;
       void display()
       {
        cout<<auther<<"-"<<title<<endl;
       }
    };
    int main()
    {
        book b1;
        b1.auther="alice";
        b1.title="c++";
        b1.display();
        return 0;
    }
