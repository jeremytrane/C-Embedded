#include <stdio.h>

int main(int argc, char *argv[]){
    int x, y;

    scanf("%d %d", &x, &y);

    if (x == y)
    {
        printf("x equals y\n");
    } else if (x > y) {
        printf("x is greater than y\n");
    } else {
        printf("x is less than y");
    }
    return 0;
}