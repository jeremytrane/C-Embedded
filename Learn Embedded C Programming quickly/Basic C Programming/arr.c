#include <stdio.h>

struct Person {
    int age;
    int height;
    short income;
};

int main(int argc, char *argv[]){
    struct Person LLL[100] = {0}; // use = {0}, otherwise structs are set to undefined by default

    LLL[0].age = 64;
    LLL[0].income = 100;

        printf("%d", LLL[0].age + LLL[0].income);
}