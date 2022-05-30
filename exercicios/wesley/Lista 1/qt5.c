#include <stdio.h>

int main() {

    int a, b, i;

     b = i = 0;
    scanf("%d", &a);


    while ( i == 0) {
        if ( a/10 != 0){
            b = b * 10 + (a%10);
            a = a/10;
        }
        else {
            b = b * 10 + a;
            i = 1;
        }
    }

    printf("%d", b);

    return 0;
}
