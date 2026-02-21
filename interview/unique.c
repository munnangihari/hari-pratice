#include<stdio.h>
int main(){
	int a[10];
	int n,i,j,count;
	printf("Enter size:");
	scanf("%d",&n);

	printf("Enter %d elements of a[]",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Non repeating elements\n");
	for(i=0;i<n;i++){
		count=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		if(count==1){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
