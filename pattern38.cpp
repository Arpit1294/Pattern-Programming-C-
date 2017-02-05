#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=1;i<=*n;i++)
    {       int k=i;
         for(int j=i;j<=*n;j++)
         {
            if(i%2==1)
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


