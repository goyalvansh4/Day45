#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int arr[5][5];
    int row,col;
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        cin>>arr[i][j];
      }
    } 
    
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        if(arr[i][j]==1){
          row=i;
          col=j;
        }
      }
    } 
    
    int diff=abs(2-row)+abs(2-col);
    cout<<diff<<endl;
}