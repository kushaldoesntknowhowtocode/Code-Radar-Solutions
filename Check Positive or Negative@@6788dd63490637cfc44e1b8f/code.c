#include <stdio.h>
void positive_negative_zero(int a){
    if(a<0){
        printf("Negative");

    }else if(a==0){
        printf("Zero");

    }else{
        printf("Positive");
    }
   
}
 int main(){
        int a;
        scanf("%d",&a);
        positive_negative_zero(a);
        return 0;
    }