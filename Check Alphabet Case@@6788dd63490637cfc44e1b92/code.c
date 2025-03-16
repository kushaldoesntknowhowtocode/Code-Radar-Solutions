#include <stdio.h>
void upper_lower(char str){
    if(char>='A'&&char<='Z'){
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