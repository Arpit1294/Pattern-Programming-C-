#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=0;i<*n;i++)
    {
         for(int j=0;j<*n;j++)
         {  if(i+j==4)
            cout<<"   "<<"*";
            else
            cout<<"   "<<abs(*n-j);
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


