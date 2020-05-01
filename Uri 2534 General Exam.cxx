#include<stdio.h>
int main()
{
	int i,j,n,temp,m;
	while(scanf("%d%d",&n,&m)!=EOF){
	int ara[n];
	for(i=0;i<n;i++) scanf("%d",&ara[i]);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(ara[j]>ara[i]) {
				temp=ara[i];
				ara[i]=ara[j];
				ara[j]=temp;
			}
		}
	}
	while(m--) { scanf("%d",&i);printf("%d\n",ara[i-1]); }
	}
}
