#include<bits/stdc++.h>
using namespace std;

int drawpattern(int num[],int digits)
{
    for (int i=0;i<digits;i++)
    {
        for(int j=i;j<digits;j++)
            cout<<"  "<<num[j];
        cout<<endl;
   }
return 0;
}

int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;
int temp1=n;
int temp2=n;
int num[10],k,digits=0;
while(temp1!=0)
{
    temp1=temp1/10;
    digits++;
}
for(int i=0;i<digits;i++){
    k=temp2%10;
    num[digits-i-1]=k;
    temp2=temp2/10;
}
drawpattern(num,digits);
return 0;
}


