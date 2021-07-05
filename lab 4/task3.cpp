#include<bits\stdc++.h>
using namespace std;
class Zooanimal{
private:
    string noA;
    int by;
    int cn;
    float wei;
    int height;
public:
    Zooanimal():noA("N/A"),by(0),cn(0),wei(0.0),height(0)
    {

    }
    void setVal(string name,int CN,float WEI,int hei)
    {
        noA=name;

        by=2021;

        cn=CN;
        wei=WEI;
        height=hei;
    }
    void setVal(string name,int BY,int CN,float WEI,int hei)
    {
        noA=name;
        if(BY>2021){
            cout<<"error";
            by=2021;
        }
        else
        by=BY;

        cn=CN;
        wei=WEI;
        height=hei;
    }
    void getValue()
    {
        cout<<" Name "<<noA<<" Birthyear "<<by<<" Cage Number "<<cn<<" Weight "<<wei<<" Height "<<height<<endl;
    }
    int getAge()
    {
        if(2021-by==0)
            return 0;
        else
            return 2021-by;
    }
};
int main()
{
    Zooanimal z;
    z.getValue();
    z.setVal("Tiger",2000,12,12.3,3);
    z.getValue();
    cout<<z.getAge();
}
