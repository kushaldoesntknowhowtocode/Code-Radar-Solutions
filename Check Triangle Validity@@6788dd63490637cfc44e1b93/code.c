#include <stdio.h>
void triangle(int a,int b,int c){
    if(((a^2)+(b^2))==(c^2)){
        printf("Valid");
    }else{
        printf("Invalid");
    }
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    triangle(a,b,c);
    return 0;
}