#include<bits/stdc++.h>

using namespace std;

int drawpattern(int *n)
{      int k=1;
    for (int i=1;i<=*n;i++)
    {
         for(int j=i;j<*n;j++)
         {
                printf("%5s"," ");
         }
         for(int j=1;j<i*2;j++)
         {
                printf("%5d",k*k);
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


