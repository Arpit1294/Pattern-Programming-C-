#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{

        for(int i=0;i<*n;i++)
        {
            int k=0;
                for(int j=0;j<i+1;j++)
                {
                    cout<<" "<<k+1;
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
