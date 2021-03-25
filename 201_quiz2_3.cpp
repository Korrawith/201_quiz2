#include <stdio.h>

int main(){
	
	
	int n,r,t,i,sum=0;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	r=0;
	t=i;
	
	while(t!=0){
		r=r*10;
		r=r+t%10;
		t=t/10;
	}
		if(i==r){
			sum++;
			
		}
		
	}
		printf("%d",sum);
		return 0;
	
	
}
