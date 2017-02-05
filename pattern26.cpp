#include<bits/stdc++.h>


using namespace std;

int drawpattern(int *n)
{
    int top=*n-1,bot=0,k=1,a[30][30];
    for (int i=0;i<*n;i++,top--,bot++)
    {
            for(int j=bot;j<=top;j++,k++)
                a[i][j]=k;
            for(int j=bot+1;j<=top;j++,k++)
                a[j][top]=k;
            for(int j=top-1;j>=bot;j--,k++)
                a[top][j]=k;
            for(int j=top-1;j>bot;j--,k++)
                a[j][bot]=k;
   }
   for(int i=0;i<*n;i++)
    {
        for(int j=0;j<*n;j++)
        {
            printf("%6d",a[i][j]);
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


