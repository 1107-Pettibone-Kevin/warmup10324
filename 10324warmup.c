#include <stdio.h>

int main(){
    int size, num_st, num_sp;
    printf("Please enter the size (diameter) of the diamond: ");
    scanf("%d", &size);
    num_sp = (size - 1)/2;
    num_st = 2 - (size % 2);
    for(int i = 1; i == size/2; i++){
        for (int j = 1; j==num_sp; j++){
            printf(" ");
        }
        for (int j = 1; j==num_st; j++){
            printf("*");
        }
        num_sp--;
        num_st += 2;
    }
    if(size % 2){
        for (int j = 1; j==size; j++){
            printf("*");
        }
    }
    for(int i = 1; i == size/2; i++){
        for (int j = 1; j==num_sp; j++){
            printf(" ");
        }
        for (int j = 1; j==num_st; j++){
            printf("*");
        }
        num_sp++;
        num_st -= 2;
    }
}