#include <bits/stdc++.h>

using namespace std;

int nthNumber(int n){
    int total= 0;
    int a=1;
    while(n>0){
        total+=(a*(n%9));
        n = n/9;
        a = a*10;
    }
    return total;
}

int main()
{
    int n;
    cin>>n;
    cout<<nthNumber(n);
    return 0;
}