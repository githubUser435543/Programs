#include <stdio.h>

void win(){
    printf("win\n");
}

void run(){
    char buff[8];
    //printf("%u\n", sizeof(buff));
    gets(buff);
}

int main(){
    int integer = 1;
    //printf("%u\n", sizeof(integer));
    //printf("%u\n", sizeof(&integet));
    printf("start\n");
    run();
    return 0;
}

// 
// 0001111101111000011
// 0001 1111 0111 1000 0110 0000 0000
//  
