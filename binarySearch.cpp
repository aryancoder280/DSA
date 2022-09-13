#include<iostream>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int ele){
    
    int l =0, r = n-1;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid] == ele){
            return 1;
        }
        else if(arr[mid]<ele){
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int ele;
    cin>> ele;
    if(binarySearch(arr,n,ele))
    {
        cout<<"Found\n";
    }
    else
    {
        cout<<"Not found\n";
    }
    return 0;
}