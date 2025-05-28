#include<iostream>
using namespace std;
class product
{
    private:
    string name;
    double price,discount,total;
    public:
    product(string name,double price,double discount,double total)
    {
        this->name=name;
        this->price=price;
        this->discount=discount;
        this->total=total;
    }
    void display()
    {
        cout<<"product:"<<this->name<<",price:$"<<this->price<<"discount:"<<this->discount<<"total:"<<this->total<<endl;
    }
};
int main()
{
    product p1("laptop",999.99,100,5000);
    product p2("smartphone",499.49,50,6000);
    p1.display();
    p2.display();
    return 0;
}