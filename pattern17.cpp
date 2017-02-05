#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{

        for(int i=1;i<=*n;i++)
        {
                int k=1,l=0;
                if(i%2==1){
                for(int j=1;j<=i;j++)
                {
                    cout<<" "<<k;
                    k+=2;
                }}
                else{
                for(int j=1;j<=i;j++)
                {
                    cout<<" "<<k+1;
                    k+=2;
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
