#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
        cin>>a[i];
    int x,k;
    cin>>x>>k;
    for (int i =n-1; i>=k; i--)
    a[i+1]=a[i];
    a[k]=x;
    n++;
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
    return 0;


}
