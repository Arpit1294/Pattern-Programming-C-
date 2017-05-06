#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int row,m;
	scanf("%d",&row);
	m=1;
		for(int i=1;i<=row;i++){
	    
	    
	    for(int space=row;space>i;space--){
	        printf(" ");
	    }
	    for(int j=1;j<=(i*2)-1;j++){
	        if(j%2==0)
	        printf(" ");
	        else{
	            printf("%d",m);
	            m+=2;
	        }
	    }
	    printf("\n");
	}
	return 0;
}
