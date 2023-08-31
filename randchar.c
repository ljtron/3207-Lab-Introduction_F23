#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    // int i, n;
    // time_t t;

    // srand((unsigned) time(&t));
    // printf("The result %d", rand());
    char charac = 'a' + (rand() % 26);
    return charac;
}