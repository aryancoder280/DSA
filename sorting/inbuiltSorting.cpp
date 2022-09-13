#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void inbuiltSort(vector<int>&v){

    //sort(v.begin(),v.end()-4); // last four elements can't be sorted
   
    sort(v.begin(),v.end());
}
void reverseArray(vector<int>&v){
    reverse(v.begin(),v.end());
}
bool comparator(int a,int b){
    if(a<b){
        return false;
    }
    else
    {
        return true;
    }
}
void reverseUsingComparator(vector<int>&v){
    sort(v.begin(),v.end(),comparator);
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
    inbuiltSort(v);
    cout<<"array sorted:";
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    reverseArray(v);
    cout<<"array reversed:";
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    inbuiltSort(v);
    reverseUsingComparator(v);
     cout<<"array sorted:";
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}