#include <stdio.h>
#include <string.h>


int main(){

    int i = 10;

    int *p;

    p = &i;
    
    printf("%p", p+1);

}


