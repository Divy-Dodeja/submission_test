#include <bits/stdc++.h>

using namespace std;

#define A 4
#define B 4

int maxh(int row[]){
    stack <int> result;
    int topv;
    int max_area = 0;
    int area = 0;
    int i =0;
    while(i<B){
        if(result.empty()|| row[result.top()]<=row[i])
        result.push(i++);
        else{
            topv = row[result.top()];
            result.pop();
            area=topv*i;
            if(!result.empty())
            {
                area = topv*(i-result.top()-1);
            }
            max_area = max(area,max_area);
        }
    }
    while(!result.empty()){
        topv = row[result.top()];
        result.pop();
        area = topv * i;
        if(!result.empty()){
            area = topv*(i-result.top()-1);
        }
        max_area = max(area,max_area);
    }
    return max_area;
}


int maxArea(int arr[][B])
{
    int result = maxh(arr[0]);
    for(int i=1;i<A;i++){
        for(int j=0;j<B;j++){
            if(arr[i][j])
                arr[i][j]+=arr[i-1][j];
        result = max(result,maxh(arr[i]));
    }
    return result;
}
}

int main(){
    int arr[][B]={
        {0,1,1,0},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,0,0},
    };
    cout<<maxArea(arr);
    return 0;
}