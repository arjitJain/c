#include <stdio.h>
#include <stdbool.h>
void swap(int a[],int leftElement,int rightElement);
void bubble_sort(int a[],int n);

void swap(int a[],int leftElement,int rightElement){
		int temp;
		temp=a[rightElement];
		a[rightElement]=a[leftElement];
		a[leftElement]=temp;

}
void bubble_sort(int a[],int n){
	bool swapped;
	do{
	  swapped = false;
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				swap(a,i,i+1);
				swapped = true;
			}
		}
	}while(swapped);
}

void main(){
	int a[6]={4,3,-5,2,1,0};
	int n= sizeof(a)/sizeof(a[0]);
	bubble_sort(a,n);
	for(int j=0;j<n;j++)
		printf("%d ",a[j]);
}
