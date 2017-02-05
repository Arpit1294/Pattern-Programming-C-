#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{       int k=4;
        for(int i=0;i<*n;i++)
        {       int k=*n-i;
                for(int j=0;j<*n*2;j++)
                {
                    if(j<=*n-1){
                        if(j<k)
                            cout<<j+1;
                        else
                            cout<<"*";
                    }
                    else{
                        if(j<=((*n*2)-1-k))
                            cout<<"*";
                        else
                            cout<<abs(*n*2-j);
                }}
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
