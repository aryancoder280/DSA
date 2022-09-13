#include<iostream>
using namespace std;

void fun(int arr[]){

    cout<<"Inside fun:"<<sizeof(arr)<<endl;
}
int main(){

    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(int);

    cout<<"Size of array in main:"<<sizeof(arr)<<endl;

    fun(arr);
    return 0;
}