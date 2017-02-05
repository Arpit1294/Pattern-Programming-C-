#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=1;i<=*n;i++)
    {
            for(int j=i;j<*n;j++)
            {
                cout<<"   ";
            }
            for(int j=1;j<i*2;j++)
            {
                if(j==1||j==i*2-1)
                    cout<<"  "<<i;
                else
                    cout<<"   ";
            }
        cout<<endl;
   }
   for (int i=*n;i>1;i--)
    {
            for(int j=*n;j>=i;j--)
            {
                cout<<"   ";
            }
            for(int j=1;j<i*2-2;j++)
            {
                if(j==1||j==i*2-3)
                    cout<<"  "<<i-1;
                else
                    cout<<"   ";
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



