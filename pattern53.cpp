#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=1;i<=*n;i++)
    {
            for(int j=1;j<i*2;j++)
            {
                if(j%2==0)
                    cout<<" "<<"*";
                else
                    cout<<" "<<i;
            }
        cout<<endl;
   }
   for (int i=*n;i>=1;i--)
    {
            for(int j=i*2;j>1;j--)
            {
                if(j%2==0)
                    cout<<" "<<i;
                else
                    cout<<" "<<"*";
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



