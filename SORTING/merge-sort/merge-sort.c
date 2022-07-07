#include <stdio.h>
void merge(int a[], int p, int q, int r);
void merge_sort(int a[], int p, int r){
	if(p<r)
	{
		int q=(p+r)/2;

		merge_sort(a, p, q);
		merge_sort(a, q+1, r);
		merge(a, p, q, r);
		
	}

}
void merge(int a[], int p, int q, int r);
void merge(int a[], int p, int q, int r){
	int n1,n2;
	n1=q-p+1;
	n2=r-q;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++){
		L[i]=a[p+i];
	}
	for(int j=0;j<n2;j++){
		R[j]=a[q+j+1];
	}
	L[n1]=2147483647;
	R[n2]=2147483647;
	int i=0,j=0;
	for(int k=p;k<=r;k++){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}
		else{
			a[k]=R[j];
			j++;
		}
	}

}
void main(){
	int a[5]={2,8,5,2,1};

	merge_sort(a,0,4);

	for(int j=0;j<5;j++){
	printf("%d",a[j]);
	}
}