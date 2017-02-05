#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{

        for(int i=0;i<*n;i++)
        {
                int k=5;
                for(int j=0;j<*n;j++)
                {
                    if(k-i>=5)
                    cout<<" "<<*n;
                    else{
                    cout<<" "<<k-i;
                    k++;
                    }

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
