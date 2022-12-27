#include<iostream>
using namespace std;
int main() {

    int arr[][4] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int val;
    cout<<"input:";    
    cin>>val;

    int i = 0,j=3;
    bool found = false;
    while(i<4 && j>=0) {
        if(arr[i][j] == val) {
            found = true;
            break;
        }
        if(arr[i][j]<val) {
           i++;
        }
        if(arr[i][j]>val) {
           j--;
        }
    }
    if(found) {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found";
    }
    return 0;
}