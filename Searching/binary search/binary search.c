#include <stdio.h>
int main(){
int b, low, high, mid;
int array[6]={10,20,30,40,50,60};
printf("enter the no to search\n");
scanf("%d",&b);

    low= 0;
    high= 6 -1;
    mid= (low + high)/2;

    while(low<=high){
      if(array[mid]<b){
        low = mid + 1;
        }
        else if(array[mid] == b)
        {
            printf("%d found at location %d\n", b, mid+1);
        break;
        }
      else{
        high=(mid-1);
      }
        mid= (low +high)/2;

   }

    if(low>high){
    printf("%d is not present in the array", b);
    }
}
