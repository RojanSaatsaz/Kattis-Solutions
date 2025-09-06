#include <stdio.h>
int main(){
    int input = 0;
    scanf ("%d", &input);
    int reminder = input%10;
    if (reminder==0) {
        printf ("Jebb");
    }
    else {
        printf ("Neibb");
    }
    return 0;
}
