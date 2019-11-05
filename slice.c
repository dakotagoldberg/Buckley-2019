#include <stdio.h>
#include <stdlib.h>

int count(char arr[]);

int main(){
    char arr[64];
    int lx, ux, step, size, c, c2;
    printf("Enter a string ");
    fgets(arr, 64, stdin);
    size = count(arr);
    int enter = 1;
    while (enter == 1 || lx >= size || lx < (size * -1)) {
        enter = 0;
        printf("Enter the first index slice: ");
        scanf("%d", &lx);
    }
    enter = 1;
    while (enter == 1 || ux > size || ux < (size * -1) || ux <= lx) {
        enter = 0;
        printf("Enter the second index slice: ");
        scanf("%d", &ux);
    }
    printf("Enter the step interval: ");
    scanf("%d", &step);

    int diff = ux - lx;

    for (int i = 0; i != diff; i++) {
        if (i % step == 0)
            printf("%c", arr[lx + i]);
    }
    printf("\n");

    return 0;
}

int count(char arr[]) {
    int len = 0;
    for (int i = 0; arr[i] != NULL; i++) {
        len++;
    }
    printf("Length of string: %d\n", len-1);
    return len-1;
    }
