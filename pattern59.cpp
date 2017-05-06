#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,s,row,col;
	cin>>row>>col;
	if(row>col)
	s=row;
	else
	s=col;
	for(int i=row;i>=1;i--){
	    m=i*(i-1)+1;
	    
	    for(int space=s;space>i;space--){
	        printf(" ");
	    }
	    for(int j=1;j<=i*2-1;j++){
	        if(j%2==0)
	        printf(" ");
	        else{
	            printf("%d",m);
	            m+=2;
	        }
	    }
	    printf("\n");
	}
	
	for(int i=1;i<=col;i++){
	    m=i*(i-1)+1;
	    
	    for(int space=s;space>i;space--){
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

