#include<iostream>
using namespace std;
int main(){
    int arr[100] = {0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<100;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}