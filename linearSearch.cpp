#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int ele = 3;
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(ele == arr[i]){
            cout<<"Found";
        }
    }
    return 0;
}