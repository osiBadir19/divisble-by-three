#include <stdio.h>

int main() {
    int n;

    printf("input an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= 100; i++){
        if (i%n == 3)
            printf("%d\n", i);
    }

    return 0;

}

