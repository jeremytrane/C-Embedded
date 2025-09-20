#include <stdio.h>

int main(int argc, char *argv[]) {
    int x;
    scanf("%d", &x);

    switch(x)
    {
        case 0:
            printf("Thats a zero\n");
            break;
        case 1:
            printf("Thats a one\n");
            break;
        case 2:
            printf("Thats a two\n");
            break;
        default:
            printf("I dont know what that is\n"); 
    }
    return 0;
}