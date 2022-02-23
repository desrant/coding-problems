#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {34, -50, 42, 14, -5, 86};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_here = 0, max_sum = 0;
    for(int i = 0; i < n; i++){
        max_here = max(arr[i], max_here + arr[i]);
        max_sum = max(max_sum, max_here);
    }
    cout<<max_sum<<endl;
}
