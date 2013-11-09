#include<stdio.h>
int main()
{int t, n, a[101],i,l;
	scanf("%d",&t);
	while(t--){
		int cnt = 0,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&l);
	max = a[l];
	for(i=1;i<=n;i++){
		if(max>a[i])
		cnt++;
	}
	printf("%d\n",(cnt+1));
}
}
