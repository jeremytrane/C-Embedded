#include <stdio.h>

struct Person {
    int age;
    int height;
};

void zeroize_me(struct Person *pStruct) {
    pStruct->age = 0;
    pStruct->height = 0;
}

int main(int argc, char *argv[]) {

    struct Person me = {0};

    me.age = 100;

    zeroize_me(&me);
    
    printf("Age: %d\n", me.age);

    return 0;

}