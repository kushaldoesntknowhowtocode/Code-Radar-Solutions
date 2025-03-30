#include <stdio.h>
int main(){
    int cp,sp,res;
    scanf("%d %d",&cp,&sp);
    res=sp-cp;
    if(res>0){
        printf("Profit");
    }else if(res<0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }return 0;

}