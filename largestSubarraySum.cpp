#include<iostream>
#include<vector>

using namespace std;
int main(){

    int n;
    int largestSum = -100000000, sum=0;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
        largestSum = max(sum,largestSum);
        if(sum<0){
            sum =0;
        }
    }
    cout<<largestSum<<endl;
    return 0;
}