#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{

        for(int i=0;i<*n/2+1;i++)
        {       int k=1;

                for(int j=*n-i*2;j>0;j--)
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
