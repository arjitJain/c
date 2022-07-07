#include<stdio.h>
//void radix_sort(int a[],int b[]);
int max_number_digit(int a[],int b[]);

int max_number_digit(int a[],int b[]){
	int max=a[0];
	for(int i=0;i<7;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	int count=0;
	while(max>0){
		max=max/10;
		count++;
	}
	for(int i=0;i<7;i++){
		b[i]=printf("%0*d \n",count,a[i]);
		}		
}
void loop(int a[],int b[],int d[]){
	for(int p=0;p<3;p++){
		for(int q=0;q<8;q++){
			d[q]=a[q]%10;
			radix_sort(a,d);
			
			b[q]=10*d[q];
		}
		
		d[p]=10*d[p]+d[p];
	}
}


void radix_sort(int a[],int b[]){
				int c[10];
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
	int a[7]={660,657,657,639,436,720,355};
	int b[7];
//	radix_sort(a,b);
	max_number_digit(a,b);
for(int i=0;i<7;i++){
		printf("%d  \n",b[i]);
	}

}