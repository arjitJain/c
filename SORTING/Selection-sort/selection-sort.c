#include<stdio.h>
void selection_sort(int a[]);
void swap(int a[],int j,int imin);
void swap(int a[],int j,int imin){
	int temp=a[j];
	a[j]=a[imin];
	a[imin]=temp;
}
void selection_sort(int a[]){
	int i,j,n=5;
	for(j=0;j<n-1;j++){
		int imin=j;
		for(i=j+1;i<n;i++){
			if(a[i]<a[imin]){
				imin=i;
			}
		}
		if(imin!=j){
			swap(a,j,imin);
		}
	}
}
void main(){
	int a[5]={4,3,5,1,2};
	selection_sort(a);
	for(int i=0;i<5;i++){
		printf("%d",a[i]);
	}

}