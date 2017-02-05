#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    int k=1;
        for(int i=0;i<*n;i++)
        {
                for(int j=0;j<=i;j++)
                {
                    cout<<" "<<k;
                    k++;
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
