#include <stdio.h>
#include<stdlib.h>


typedef enum{true,false} bool;

bool verify(int a,int error){
    if(error){
        printf("time to quit\n");
        exit(1);
    }
    return a!=6;
}

int main(int argc, char** argv){
    verify(5,true);
    printf("essaie2\n");
    verify(6);
}