#include <stdio.h>
void senior(int age){
    if(age>=60){
        printf("Eligible");

    }else{
        printf("Not Eligible");
    }
    return 0;
}
int main(){
    int age;
    scanf("%d",&age);
    senior(age);
}