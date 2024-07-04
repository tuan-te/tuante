#include<iostream>
using namespace std;
int main()
{
    int n,u,x;
    cin>>n;
    for (x=1000; x<=9999;x++)
    {
        int x1,x2,x3,x4;
        x1=x/1000;
        x2=(x/100)%10;
        x3=(x/10)%10;
        x4=x%10;
        int u1,u2;
        u1=x1+x2;
        u2=x3+x4;
        if (u1>u2)
        {
            if (u2<10)
                u=u1*10+u2;
            else u=u1*100+u2;
        }
        else{
            if (u1<10)
                u=u2*10+u1;
            else u=u2*100+u1;
        }
        if(u==n)
            break;
    }
    if(u==n)
        cout<<x;
    else
        cout<<0;
    return 0;
}
