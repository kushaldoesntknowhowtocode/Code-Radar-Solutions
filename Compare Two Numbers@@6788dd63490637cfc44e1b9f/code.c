#include <stdio.h>
void comp(int a,int  b){
    if(a>b){
        printf("First");
    }else if (b>a){
        printf("Second");
    }else{
        printf("Equal");
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    comp(a,b);
    return 0;   
}