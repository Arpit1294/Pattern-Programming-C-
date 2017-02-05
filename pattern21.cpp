#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
        for(int i=1;i<=*n;i++)
        {       int k=i;
                for(int j=1;j<=i;j++)
                {
                    cout<<" "<<k;
                    k += *n-j;
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
