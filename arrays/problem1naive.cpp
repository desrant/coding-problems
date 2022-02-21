#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res[n];
    long prod = 1;
    for(int i = 0; i < n; i++){
        prod *= arr[i];
    }

    for(int i = 0; i < n; i++){
        res[i] = prod / arr[i];
    }

    for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
