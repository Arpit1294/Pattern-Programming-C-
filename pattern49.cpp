#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{   int k=1;
    for (int i=0;i<*n;i++)
    {
        for(int j=0;j<*n;j++)
        {
            if(i==0){
            printf("%4d",k);
            k++;}
            else if(j>=*n-1){
            printf("%4d",k);
            k++;}
            else if(i==*n-1){
            printf("%4d",k+*n-1-j);
            }
            else if(j==0){
            printf("%4d",k+*n+2*(*n-1-i)-1);
            }
            else{
            printf("%4s"," ");}
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


