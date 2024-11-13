#include <stdio.h>
#include <stdlib.h>

int main(){
    // flag is very safe :D
    char flag[] = "Sicca{ this is a fake flag hahahahahaha }";
    int x = rand() ;
    printf("rand = %d\n",x);
    printf("Enter the random number to advance : \n");
    int p;
    scanf("%d",&p);
    if (p==x) printf("The flag is Sicca{...} , with the number you entered !\n");
    else printf("There is no flag for you.\n");
}