#include <stdio.h>

int main(){
    int size, num_st, num_sp, i, j;
    printf("Please enter the size (diameter) of the diamond: ");
    scanf("%d", &size);
    printf("Printing diamond of size %d\n", size);
    num_sp = (size - 1)/2;
    num_st = 2 - (size % 2);
    printf("%d\n", num_sp);
    printf("%d\n", num_st);
    for(i = 1; i >= (size/2); i++){
        for (j = 1; j>=num_sp; j++){
            printf(" ");
        }
        for (j = 1; j>=num_st; j++){
            printf("*");
        }
        printf("\n");
        num_sp--;
        num_st += 2;
        printf("%d\n", num_sp);
        printf("%d\n", num_st);
    }
    if(size % 2){ //middle row for odd numbers
        for (j = 1; j>=size; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i >= (size/2); i++){
        for (j = 1; j>=num_sp; j++){
            printf(" ");
        }
        for (j = 1; j>=num_st; j++){
            printf("*");
        }
        printf("\n");
        num_sp++;
        num_st -= 2;
        printf("%d\n", num_sp);
        printf("%d\n", num_st);
    }
    return 0;
}
