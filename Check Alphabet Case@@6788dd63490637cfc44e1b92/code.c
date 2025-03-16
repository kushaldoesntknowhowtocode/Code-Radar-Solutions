#include <stdio.h>
void upper_lower(char str){
    if(str>='A'&&str<='Z'){
    printf("Uppercase");
}else if(str>='a'&&str<='z'){
    printf("Lowercase");
}else{
    printf("Not an alphabet");
}
}
int main(){
    char str;
    scanf("%c",&str);
    upper_lower(str);
}