#include<iostream>
#include<cstring>
using namespace std;
class Product{
private :
    double  discountPercent;
    int unitPrice;
    char name[100];
public :
    void assignName(char Name[])
    {
        strcpy(name,Name);
    }
    void setPrice(double price=10)
    {
        unitPrice=price;
    }
    void setDiscPercent(double percent=0.5)
    {
        if(percent>0.0 && percent<10)
        discountPercent=percent;
        else{
        cout<<"Range error"<<endl;

        }
    }
    double getSellingPrice(int nos)
    {

        return (unitPrice - (discountPercent/100)*unitPrice)*nos;

    }
    void display()
    {

        cout<<name<<" has a unit price BDT  "<<unitPrice<<" . Current discount"<<discountPercent<<"%"<<endl;
    }
};
int main()
{

  Product p;
  p.assignName("Cocola noodel");
  p.setPrice(20);
  p.setDiscPercent(0.3);
  p.display();
}
