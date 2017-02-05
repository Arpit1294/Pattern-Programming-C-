#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=0;i<*n;i++)
    {   int k=i+1;
        for(int j=0;j<*n;j++)
        {   if(j>i)
            {
            k=k+2;
            cout<<"  "<<k;
            }
            else
            cout<<"  "<<k;
            k--;
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


