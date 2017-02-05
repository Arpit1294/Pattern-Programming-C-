#include<bits/stdc++.h>
using namespace std;
int drawpattern(int *n){
    for(int i=*n; i>1; i--)
    {
        for(int j=*n;j>=1;j--)
        {
            if(j>i) cout<<" "<<j;
            else cout<<" "<<i;
        }
        for(int j=2;j<=*n;j++)
        {
            if(j>i) cout<<" "<<j;
            else cout<<" "<<i;
        }
       cout<<endl;
    }
    for(int i=1; i<=*n; i++)
    {
        for(int j=*n;j>=1;j--)
        {
            if(j>i) cout<<" "<<j;
            else cout<<" "<<i;
        }
        for(int j=2;j<=*n;j++)
        {
            if(j>i) cout<<" "<<j;
            else cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}

int main(){
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
drawpattern(&n);
return 0;
}
