#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;
    float p,s;
    cin>>a>>b>>c;
if ((a+b<=c) or (a+c<=b) or (b+c<=a))
    cout<<"Khong phai tam giac";

else if (a==b&&a==c)
{
    p=double(a+b+c)/2;
s= sqrt(p*(p-double(a))*(p-double(b))*(p-double(c)));
cout<<"Tam giac deu, dien tich = "<<fixed<<setprecision(2)<<s;
}
else if ((a==b) or (b==c) or (a==c))
{
p=double(a+b+c)/2;
s= sqrt(p*(p-double(a))*(p-double(b))*(p-double(c)));
cout<<"Tam giac can, dien tich = "<<fixed<<setprecision(2)<<s;
}
else if ((a*a==b*b+c*c) or (b*b==a*a+c*c) or (c*c==a*a+b*b))
{

   p=double(a+b+c)/2;
s= sqrt(p*(p-double(a))*(p-double(b))*(p-double(c)));
cout<<"Tam giac vuong, dien tich = "<<fixed<<setprecision(2)<<s;
}
else
{
   p=double(a+b+c)/2;
s= sqrt(p*(p-double(a))*(p-double(b))*(p-double(c)));
cout<<"Tam giac thuong, dien tich = "<<fixed<<setprecision(2)<<s;
}
return 0;
}
