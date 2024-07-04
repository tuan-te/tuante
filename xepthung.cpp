#include <iostream>
#include <math.h>
using namespace std;

int Min(int a[][100], int n, int m){
    int x = a[0][0];
    for (int i = 0; i < n; i++){
        for (int j=0; j<m; j++){
            if (a[i][j]< x){
                x=a[i][j];
            }
        }
    }
    return x;
}

int main ()
{
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for (int i =0; i<n; i++){
        for (int j=0; i<m; j++){
            cin>>a[i][j];
        }
     }

    int cnt = 0;
    for (int i =0; i<n; i++){
        for (int j=0; i<m; j++){
            if (a[i][j] != Min (a,n,m)){
                cnt += (a[i][j] - Min(a,n,m));
            }
        }
    }

    cout << cnt << endl;

    return 0;
}


