#include <stdio.h>
void count_sort(int a[],int b[], int k);
void count_sort(int a[],int b[],int k){
int c[k+1];
for(int i=0;i<=k;i++){
	c[i]=0;
}

for(int j=0;j<8;j++){
	c[a[j]]=c[a[j]]+1;
}

for(int i=1;i<=k;i++){
	c[i]=c[i]+c[i-1];
}

for(int j=7;j>=0;j--){
	b[c[a[j]]-1]=a[j];
	c[a[j]]=c[a[j]]-1;
}
}
void main(){
	int a[8]={2,5,3,0,2,3,0,3};
	int b[8];
	int k=5;

	count_sort(a,b,k);
	for(int i=0;i<8;i++){
		printf("%d",b[i]);
	}
	
}