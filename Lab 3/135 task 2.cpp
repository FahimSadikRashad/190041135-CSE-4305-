#include<iostream>
using namespace std;
class RationalNumber{
private :
    int Numerator;
    int Denominator;

public :
    void assign(int numerator,int denominator)
    {
        if(denominator==0)
        {
            cout<<"There is an error"<<endl;
            return;
        }
        Numerator=numerator;
        Denominator=denominator;
    }
    double convert()
    {
        return ((double)Numerator/Denominator);
    }
    void invert()
    {
        if(Numerator==0)
        {
            cout<<"Can not store "<<endl;


        }
        else
        {
            int temp=Numerator;
            Numerator=Denominator;
            Denominator=temp;
        }
    }
    void Print()
    {
        cout<<"Rational number is "<<Numerator<<"/"<<Denominator<<endl;
    }


};
int main()
{

    RationalNumber R;
    R.assign(3,2);
    cout<<R.convert()<<endl;
     R.Print();
    R.invert();
    cout<<R.convert()<<endl;
    R.Print();
}
