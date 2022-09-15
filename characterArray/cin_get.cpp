#include<iostream>
using namespace std;

int main(){

    char a[100];
    
    char oneWord = cin.get();
    int index=0;
    while(oneWord!=cin.eof() ){ // cin.eof is imp to terminate correctly
       
       a[index++] = oneWord;
       oneWord = cin.get();
    }
    cout<<a<<endl;
    return 0;
}