#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x,b=y;
    }
    void show()
    {
        cout<<"\nA="<<a<<" ;B="<<b<<endl;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main()
{
    complex c1,c2,c3;
    cout<<"First complex no.: "<<endl;
    c1.set_data(3,5);
    c1.show();
    cout<<endl;
    cout<<"Second complex no.: "<<endl;
    c2.set_data(7,5);
    c2.show();
    cout<<endl;
    c3=c1+c2;
    cout<<"Their resulting complex after addition: "<<endl;                // OR c3=c1.operator+(c2);
    c3.show();
}
