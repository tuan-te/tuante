#include <iostream>
using namespace std;
bool phep_chia(int x, int y, double& thuong){
if (y != 0) {
thuong = double(x)/y;
return true;
} else {
return false;
}
}
int main(){
double thuong;
if (phep_chia(5, 3, thuong)){
cout << "Thuong so la " << thuong;
} else {
cout << "Khong the chia duoc ";
return 0;
}}
