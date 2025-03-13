#include <stdio.h>
#include <unistd.h>

void win(){
    printf("you win");
    return;
}

void vuln(){
    char buff[200];
    int input;
    input = read(0, buff, 400);
    printf("user supplied: %d bytes\n", input);
    printf("buffer content: %s\n", buff);
    return;
}

int main(){
    vuln();
    return 0;
}
