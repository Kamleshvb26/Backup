#include<bits/stdc++.h>
using namespace std;

int binToDec(string bin,int s){
    int pw=0;
    int dec=0;
    for(int i=s-1;i>=0;i--){
        if(bin[i]=='1'){
            dec+=pow(2,pw);
        }
        pw++;
    }
    return dec;

}

int main(){

    cout<<"Enter binary :";
    string bin;
    cin>>bin;
    int ans=binToDec(bin,bin.size());
    cout<<"Decimal of "<<bin<<" is :"<<ans<<"\n";

    return 0;
}

