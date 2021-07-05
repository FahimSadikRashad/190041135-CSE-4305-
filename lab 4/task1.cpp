#include<bits\stdc++.h>
using namespace std;
class Calculator{
private :
    int data;
public :
    Calculator(): data(0)
    {

    }
    Calculator (int n): data(n)
    {

    }
    void add( int Value )
    {
        data+=Value;
    }
    void subtract( int Value )
    {
        data-=Value;
    }
    void multiply( int Value )
    {
        data*=Value;
    }
    void divideBy( int Value )
    {
        if(!Value)
            cout<<"Can  not divide"<<endl;
        else
            data=data/Value;
    }
    void setvalue(int n)
    {
        data=n;
    }
    void getvalue() const
    {
        cout<<"Calculator display :"<<data<<endl;
    }
    void Clear()
    {
        data=0;
    }
    ~Calculator()
    {
        cout<<"Object being destroyed"<<endl;
    }
};
int main()
{
    Calculator c;
    //c.setvalue(4);
    c.add(10);
    c.getvalue();
    c.add(7);
    c.getvalue();
    c.multiply(31);
    c.getvalue();
    c.subtract(42);
    c.getvalue();
    c.divideBy(7);
    c.getvalue();
    c.divideBy(0);
    c.getvalue();
    c.add(3);
    c.getvalue();
    c.subtract(1);
    c.getvalue();
    c.Clear();
    c.getvalue();


}
