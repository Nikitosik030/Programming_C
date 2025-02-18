#include <stdio.h>

int main() {
    char stroka[80];
    printf("vvedite stroky: ");
    scanf("%s", &stroka);
    char *p_str = stroka;
    while(*p_str){
    if(*p_str == 'a'){
    *p_str = 'A';
    }
    if(*p_str == 'b'){
    *p_str = 'B';
    }
    *p_str ++;
    }
    printf("Polychennya stroka: %s\n", stroka);
    return 0;
}
