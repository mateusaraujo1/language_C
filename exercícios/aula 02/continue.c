#include <stdio.h>

int main() {
    int x;
    for (x = 1; x <= 10; x ++) {
        if (x == 5)
            break;
        if (x == 2)
            continue;
        printf("%d ", x);
 }

    printf("\n Saiu do loop em x == %d\n", x);

    return 0;
}