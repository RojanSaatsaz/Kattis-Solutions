#include <stdio.h>
int main() {
    int trump=0;
    int kim=0;
    scanf("%d", &trump);
    scanf("%d", &kim);
    if(trump>kim){printf("MAGA!");}
    else if(trump==kim){printf("WORLD WAR 3!");}
    else{printf("FAKE NEWS!");}
    return 0;
}
