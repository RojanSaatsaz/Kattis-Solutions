#include <stdio.h>
int main(){
    int input=0;
    int output=0;
    scanf ("%d", &input);
    if (input < 10) {output = input;}
    else if (input < 100) {output = (input%10)*10 + (input/10);}
    printf ("%d", output);
    return 0;
}
