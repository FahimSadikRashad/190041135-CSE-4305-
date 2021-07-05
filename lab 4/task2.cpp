#include<bits\stdc++.h>
using namespace std;
class BankAccount{
private :
    int acn;
    string ac_n;
    bool ty;
    float balance ;
    float min_bal;
public:
    BankAccount()
    {

    }
    BankAccount(int Ac,string name,bool Ty,float cur_ba,float m_bl):acn(Ac),ac_n(name),ty(Ty),balance(cur_ba),min_bal(m_bl)
    {
    }
    void SetVal(int Ac,string name,bool Ty,float cur_ba,float m_bl)
    {
        acn=Ac;
        ac_n=name;
        ty=Ty;
        balance=cur_ba;
        min_bal=m_bl;

    }
    void ShowVal()
    {
        cout<<"Account name "<<ac_n<<" Account number "<<acn<<" Account type "<<(ty?"Current" : "Savings")<<" Current Balance "<<balance<<" MINIMUM BALANCE "<<min_bal<<endl;
    }
    float Show_balance()
    {
        return balance;
    }
    void deposite(float am)
    {
        balance+=am;
    }
    void withdraw(float am)
    {
        if(balance-am>min_bal)
        balance-=am;
        else
        {
            cout<<"Can not withdraw exceeding min balance"<<endl;
        }
    }
    void give_interest(float val=2.5 )
    {
        deposite(((balance*(val/100))-((balance*(val/100))*0.1)));

    }
};
int main()
{
    BankAccount a(12,"hs",0,12.4,3.5);
    a.ShowVal();
    cout<<a.Show_balance()<<endl;
    a.deposite(4.5);
    cout<<a.Show_balance()<<endl;
    a.withdraw(3.5);
    cout<<a.Show_balance()<<endl;
    a.withdraw(13.5);
    cout<<a.Show_balance()<<endl;
    a.give_interest();
    cout<<a.Show_balance()<<endl;

}
