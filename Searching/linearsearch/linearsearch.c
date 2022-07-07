#include <stdio.h>

int main() {
int i,b,c;
int n[6]={10,20,30,40,50,60};
printf("enter the no to search\n");
scanf("%d",&b);
for(i=0;i<=5;i++){
    if(n[i]==b){
        c=1;
        break;
    }
}
if(c==1){
    printf("the entered no is found at position %d",i+1);
}
else{
    printf("not found");
}
    return 0;
}
