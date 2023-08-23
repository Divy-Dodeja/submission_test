#include <bits/stdc++.h>

using namespace std;

void fixArray(int arr[], int n){
    int i=0;
    int count = 0;
    while(i<n){
        if(arr[i]!=i+1)
        {
            count++;
        }
        i++;
    }
    cout<<count+1;
}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fixArray(arr,n);
}