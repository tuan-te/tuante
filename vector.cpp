#include <bits/stdc++.h>
using namespace std;
bool cmp (int a, int b)
{
    int x=0;
    for (int i=a; a>0; a=a/10)
    x+=a%10;
    int y=0;
    for (int i=b; b>0; b=b/10)
    y+=b%10;
    if (x==y){
    return a>b;}
    return x<y;
}
int main ()
{
int n; cin>>n;
vector <int> a(n);
for (int i=0; i<n; i++)
cin>>a[i];
sort(a.begin(),a.end(),cmp);
for (int x:a)
cout<<x<<" ";
return 0;
}



