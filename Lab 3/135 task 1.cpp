#include<iostream>
using namespace std;
class Counter{
private :
    int count;
    int Step;
public :
    Counter():count(0),Step(0)
    {
    }
    void setIncrementStep(int step_val)
    {
        Step=step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=Step;
    }
    void resetCount()
    {
        count=0;
    }
};
int main()
{
    Counter c;
    c.setIncrementStep(2);
    c.increment();
    cout<<c.getCount();

}
