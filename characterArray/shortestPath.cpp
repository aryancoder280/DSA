//problem Stattemnt prateek narang course
#include<iostream>
using namespace std;
int main(){

    char arr[100];
    cin.getline(arr,100);
    int x=0,y=0;
    for(int i=0;i<strlen(arr);i++){
        if(arr[i] == 'N'){
            x++;
        }
        else if(arr[i] == 'W'){
            x--;
        }
        else if(arr[i] == 'E'){
            y++;
        }
        else
        {
            y--;
        }
    }
    char shortestPath[100];
    int ind=0;
    while(x<0){
        shortestPath[ind++]='S';
        x++;
    }
    while(x>0){
        shortestPath[ind++] = 'N';
        x--;
    }
    while(y>0){
        shortestPath[ind++] = 'E';
        y--;
    }
    while(y<0){
        shortestPath[ind++] = 'W';
        y++;
    }
    cout<<shortestPath;
}