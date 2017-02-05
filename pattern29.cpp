#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    for (int i=0;i<*n;i++)
    {   int k=1;
         for(int j=0;j<*n*2;j++)
         {
            if(j>*n-1)
                if(j<=(*n-1)+(*n-1-i))
                    cout<<"  "<<" ";
                else
                    cout<<"  "<<*n*2-j;
            else
                if(j>i)
                    cout<<"  "<<" ";
                else
                    cout<<"  "<<j+1;
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


