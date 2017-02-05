#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=0;i<*n;i++)
    {
        for(int j=0;j<*n;j++)
        {
            if(i==0||i==*n-1||j==0||j==*n-1)
            cout<<"  "<<1;
            else
            cout<<"  "<<0;
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


