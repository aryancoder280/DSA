#include<iostream>
using namespace std;
int main(){

    char a[100];
    char b[100];

    cin>>a;

    //strlen gives the number of character in the character array
    cout<<"number of character:"<<strlen(a)<<endl;
    //strcpy copy one character array into another.
    strcpy(b,a); // strcpy(destination,orignal);
    cout<<"a:"<<a<<" b:"<<b<<endl;
    //strcmp compare two strings, if both array is same then it will return 0, else negative value(diff of characters) if firsr is smaller than second and positive value(diff of characters) if frist is greater then second
    cout<<strcmp(a,b)<<endl;
    //strcat concatenate two strings;
    cout<<strcat(a,b);
}