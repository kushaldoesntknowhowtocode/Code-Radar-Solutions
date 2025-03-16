#include <stdio.h>
void upper_lower(char str){
    if(str>='A'&&str<='Z'){
    printf("Uppercase");
}else{
    printf("Lowercase");
}
}
int main(){
    char str;
    scanf("%c",&str);
    upper_lower(str);
}