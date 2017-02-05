#include<bits/stdc++.h>
using namespace std;

int drawpattern(int *n)
{
    int flag=1;
        for(int i=1;i<=*n;i++)
        {

                for(int j=1;j<=i;j++)
                {
                    cout<<" "<<flag%2;
                    flag++;
                }
            if (i % 2 == 0)
                flag = 1;
            else
                flag = 0;

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
