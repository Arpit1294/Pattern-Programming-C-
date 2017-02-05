#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{

        for(int i=0;i<*n;i++)
        {       int k=1,l=0;
                if(i%2==0){
                for(int j=*n-i;j>0;j--)
                {
                    cout<<" "<<k;
                k++;
                }}
                else{
                for(int j=*n-i;j>0;j--)
                {
                    cout<<" "<<*n-i-l;
                l++;

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
