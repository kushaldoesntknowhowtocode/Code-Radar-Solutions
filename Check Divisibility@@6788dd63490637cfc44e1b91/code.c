#include <stdio.h>
void divisible(int a){
    if(a%5==0&&a%11==0){
        printf("Divisible");
    }else{

        printf("Not Divisible");
    }
}
int main(){
    int a;
    scanf("%d",a);
    divisible(a);
}