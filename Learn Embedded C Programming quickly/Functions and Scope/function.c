#include <stdio.h>

int sum(int a, int b);

int main(int argc, char *argv[]) {
    int a, b;
    
    scanf("%d %d", &a, &b);

    int result = sum(a, b);

    printf("The result is %d\n", result);

    return 0;

}

int sum(int a, int b) {
    return a + b;
}