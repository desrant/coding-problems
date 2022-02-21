#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 8, 2, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int prefix_products[n] = {1}, suffix_products[n] = {1,1,1,1,1}, res[n] = {1};
    prefix_products[0] = arr[0];
    suffix_products[n-1] = arr[n-1];
    for(int i = 1; i < n; i++){
        prefix_products[i] = prefix_products[i-1] * arr[i];
    }

    for(int i = n-2; i >= 0; i--){
        suffix_products[i] = suffix_products[i+1] * arr[i];
    }

    res[0] = suffix_products[1];
    res[n - 1] = prefix_products[n - 2];
    for(int i = 1; i < n-1; i++){
        res[i] = prefix_products[i - 1] * suffix_products[i + 1];
    }

    for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;

    return 0;
}
