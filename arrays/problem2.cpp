#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {3, 7, 5, 6, 9};
    int i, n = sizeof(arr)/sizeof(arr[0]);
    int max_seen = INT_MIN, min_seen = INT_MAX;
    int left, right;
    for(i = 0; i < n; i++){
        max_seen = max(max_seen, arr[i]);
        if(arr[i] < max_seen){
            right = i;
        }
    }

    for(i = n-1; i >= 0; i--){
        min_seen = min(min_seen, arr[i]);
        if(arr[i] > min_seen){
            left = i;
        }
    }
    cout<<"[ "<<left<<", "<<right<<" ]"<<endl;

    return 0;

 }
