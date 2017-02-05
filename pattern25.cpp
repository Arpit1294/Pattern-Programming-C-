#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=0;i<*n;i++)
    {
         for(int j=*n-i;j>0;j--)
         {
            cout<<" "<<i+1;
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


