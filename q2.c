#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){
    char * answer= (char *) malloc(1000*sizeof(char));
    printf("Please type something: ");
    gets(answer);
    printf("you typed %s \n",answer);
    return 0;
}