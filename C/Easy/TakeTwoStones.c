#include <stdio.h>
bool iseven(int x) {
    if(x%2==1) { return false;}
    return true;
}
int main() {
    int input;
    scanf ("%d", &input);
    if (input>3) {input=input-4;}
    if (iseven(input)) {
        printf ("Bob");
    }
    else{
        printf ("Alice");
    }
    return 0;
}

