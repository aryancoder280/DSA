#include<iostream>
using namespace std;

int main(){

    char arr[100];
    cin.getline(arr,100); // stops on enter
    //cin.getline(arr,100,'.'); // '.' is an optinal parameter to read a paragraph
    cout<<arr;

   
    return 0;
}
