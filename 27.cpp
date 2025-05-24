#include<iostream>
using namespace std;
class product
{
    private:
    int quantity;
    float priceperitem;
    public:
    void setproduct(int q,float price)
    {
        if(q>0&&price>0)
        {
            quantity=q;
            priceperitem=price;
        }
        else
        {
            cout<<"invalid quality or price!"<<endl;
        }
    }
    float gettotalprice()
    {
        float effectiveprice=priceperitem;
        if(priceperitem>2000)
        {
            effectiveprice-=500;
        }
        return quantity*effectiveprice;
    }
    int getquantity()
    {
        return quantity;
    }
    float getunitprice()
    {
        return priceperitem;
    }
};
int main()
{
    product iteam1;
    iteam1.setproduct(3,499.99);
    cout<<"iteam bought:"<<iteam1.getquantity()<<endl;
    cout<<"price per iteam:$"<<iteam1.getunitprice()<<endl;
    cout<<"total cost:$"<<iteam1.gettotalprice()<<endl;
    return 0;
}
    


