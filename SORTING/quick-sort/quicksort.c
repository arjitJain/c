#include<stdio.h>
void quick_sort(int a[],int p,int r);
int partition(int a[],int p,int r);
void swap_in(int a[],int leftElement,int rightElement);
void swap_out(int a[],int p, int i);

void swap_in(int a[],int leftElement,int rightElement){
	int temp;
	temp=a[rightElement];
	a[rightElement]=a[leftElement];
	a[leftElement]=temp;
}
void swap_out(int a[],int p,int i){
	int temp;
	temp=a[i];
	a[i]=a[p];
	a[p]=temp;
}

int partition(int a[],int p,int r){
	int x=a[p];//pivot
	int i=p;
	for(int j=p+1;j<5;j++){
		if(a[j]<=x){
			i++;
			swap_in(a,i,j);
		}
	}
	swap_out(a,p,i);
	return i;
}

void quick_sort(int a[],int p,int r){
	if(p<r){
		int q=partition(a,p,r);
		quick_sort(a,p,q-1);
		quick_sort(a,q+1,r);
	}
}
void main(){
	int a[5]={3,5,4,7,1};
	quick_sort(a,0,4);
	for(int i=0;i<5;i++){
		printf("%d\n",a[i]);
	}

}