#include<iostream>
using namespace std;

int main(){
    
    char a[] = {'1','2','3'};
    char b[100];
    cin>>b; // will consider space a termination point. therfore only one word is acceptable.
    cout<<strlen(b)<<endl; // will retrun number of array elements.
    cout<<sizeof(b)<<endl;//will return size of array assigned.
    return 0;
}

//cin string has a limitatoin, which it consider space as a dilemiter.
//