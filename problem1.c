// Printing the square with stars.

# include<stdio.h>

int main(){
    int lines;
    printf("What is the length of the side of square:\n");
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++){
        for (int j = 0; j < lines; j++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}