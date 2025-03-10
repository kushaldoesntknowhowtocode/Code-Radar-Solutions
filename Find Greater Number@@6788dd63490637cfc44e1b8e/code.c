#include <stdio.h>
void grater_of_two_int(int a,int b){
    if(a>b){
        printf("%d",a);
    }else{
        printf("%d",b);
    }

}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    grater_of_two_int(a,b);
    return 0;
}