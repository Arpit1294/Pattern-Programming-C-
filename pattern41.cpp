#include<bits/stdc++.h>

using namespace std;

int drawpattern(int *n)
{   int k=1;
    for (int i=1;i<=*n;i++)
    {
         cout<<k<<" ";
         k=k*11;
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


