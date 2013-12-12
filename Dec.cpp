#include<stdio.h>
int main()
{               
int n,i,j,a[11][11],q,x1,x2,y1,y2;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		
			scanf("%d",&a[i][j]);
          
		   }}
		   scanf("%d",&q);
		   while(q--){
				
			int b[10] = {0};	
				int cnt = 0;
				scanf("%d",&x1);
				scanf("%d",&y1);
				scanf("%d",&x2);
				scanf("%d",&y2);
				for(i=x1;i<=x2;i++){
				for(j=y1;j<=y2;j++){
			
				if(b[a[i][j]]==0){
					b[a[i][j]]= a[i][j];
					cnt++;
					printf("%d",b[a[i][j]]);
				}
				         
		   }}
				printf("%d \n",cnt);
		   }
	
	
	
	
	return 0;
}
