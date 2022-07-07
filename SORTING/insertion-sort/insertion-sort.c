#include<stdio.h>
void insertion_sort(int a[],int n);
void main(){
int a[5]={3,4,2,5,1};
int n = sizeof(a)/sizeof(a[0]);
 insertion_sort(a,n);
	for(int k=0;k<5;k++){
		printf("%d\n",a[k]);
	}
}
void insertion_sort(int a[],int n){
		int i,j,key;


	for(j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}

}
