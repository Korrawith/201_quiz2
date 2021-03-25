#include <iostream>

using namespace std;

void Cube(int n){

	int i,m;
	bool cub[n+1];

		for(i=0;i<=n;i++){
			cub[i]=true;
		}
		for(i=2;i*i*i<=n;i++){
			if(cub[i]){
				for(m =1;i*i*i*m<=n;m++){
					cub[i*i*i*m]=false;
				}
			}
		}
		
		for(i=1;i<=n;i++){
			if(cub[i]==true){
				cout<<i<<" ";	
			}	
		}
}

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	Cube(n);
	return 0;
}
