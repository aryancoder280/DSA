// find the minimum element form unsorted array and put it at the beginning.
#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int>&v,int n){

    for(int pos=0;pos<n-1;pos++){

        int val = v[pos],ind = pos;
        for(int j=pos+1;j<n;j++){
            if(val>v[j]){
                val = v[j];
                ind = j;
            }
        }
        swap(v[pos],v[ind]);
    }
}
int main(){
     int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    selectionSort(v,n);  
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;  
}