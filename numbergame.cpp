#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(0));
    int num=rand()%100+1;
    int k;
    cin>>k;
    int cnt=0;
    while(num!=k){
        if (num>k){
            cout<<"The number is greater than you guess"<<endl;
        }
        else{
            cout<<"The number is less than you guess"<<endl;
        }
        cin>>k;
        cnt++;
    }
    cout<<"you guessed it right in "<<cnt<<endl;

        return 0;
} 