#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
int l=1;
    for (int i=1;i<=*n;i++)
    {
            for(int j=i;j<*n;j++)
            {
                cout<<"   ";
            }
            for( int k=1;k<i*2;k++)
            {
                cout<<" "<<l<<" ";
                l++;
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


