#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=1;i<=*n;i++)
    {int k=1;
         for(int j=1;j<i*2;j++)
         {
            if(j>i){
            k--;
            cout<<"  "<<k-1;
            }
            else{
            cout<<"  "<<k;
            k++;}
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


