#include <stdio.h>
#include <string.h>
int main() {
    char doctor[1000]="";
    char jon[1000]="";
    scanf("%s", doctor);
    scanf("%s", jon);
    if (strlen(jon) > strlen(doctor)) {
    printf("no");
    } 
    else {
    printf("go");
    }
    return 0;
}
