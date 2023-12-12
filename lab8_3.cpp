#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your age: ";
    cin>>a;
    if(a<=25)
    {
        cout<<"Enter your height: ";
        cin>>b;
        if(b<100)
        {
            cout<<"Your character = Chopper";
        }
        else if(b<180)
        {
            cout<<"Your character = Usopp";
        }
        else
        {
            cout<<"Enter your bounty: ";
            cin>>c;
            if(c>1100000000)
            {
                cout<<"Your character = Zoro";
            }
            else
            {
                cout<<"Your character = Sanji";
            }
        }
    }
    else if(a<=60)
    {
        cout<<"Enter your bounty: ";
        cin>>c;
        if(c>500000000)
        {
            cout<<"Your character = Jinbe";
        }
        else
        {
            cout<<"Your character = Franky";
        }
    }
    else
    {
        cout<<"Your character = Brook";
    }
    return 0;
}