//
// Created by user on 29/11/2018.
//

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>

struct Thing{
    char c;
    double d;
};

int f(float a, float b){
    printf("a + b = %f\n", a + b);
    return 0;
}

void g(struct Thing* t){
    printf("c : %c\n", t->c);
}

int main(){
    int a[100] = {0};
    int* p = a;
    printf("sizeof(a)- %lu\n", sizeof(a));
    printf("sizeof(*a)- %lu\n", sizeof(*a));
    printf("sizeof(&a)- %lu\n", sizeof(&a));
    printf("sizeof(p)- %lu\n", sizeof(p));
    printf("sizeof(*p)- %lu\n", sizeof(*p));
    printf("sizeof(&p)- %lu\n", sizeof(&p));
    return 0;
}