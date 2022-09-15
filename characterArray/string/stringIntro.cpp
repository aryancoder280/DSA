#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    getline(cin,s);// reads all character except enter: '\n'
    cout<<s<<endl;

    for(char ch: s){
        cout<<"'"<<ch<<"' ";
    }

}