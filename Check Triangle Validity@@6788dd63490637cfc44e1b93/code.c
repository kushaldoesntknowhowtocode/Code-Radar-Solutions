#include <stdio.h>
void triangle(int a,int b,int c){
    if(((a*a)+(b*b))==(c*c)){
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