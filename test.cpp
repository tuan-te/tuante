#include <iostream>
using namespace std;
struct PS
{
int ts;
int ms;
};
void fun (PS a, PS b)
{
PS x;
x.ms=a.ms*b.ms;
x.ts=a.ts*b.ts;
cout<<x.ts<<"/"<<x.ms;
}
int main() {
PS arr[5]={{1,2},{2,3}, {3,4}, {4,5},{5,6}};
PS *p = new PS{3,5};
PS *parr= &arr[3];
fun (*p, *parr);
return 0;
}
