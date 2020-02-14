#include <stdlib.h>
#include <stdio.h>

int main(){
    int a,b;

    printf("digite um numero incrivel: ");
    scanf("%d",&a);

    if ( a % 2 != 0) {
        printf("esse numero é IMPAR!!\n\n");
    }
    else {
        printf("o tal de número é PAR\n\n");
    }
    

    return 0;
}