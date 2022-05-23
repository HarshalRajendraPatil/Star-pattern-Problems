// Q.1 Printing the square with stars, where the number of rows for the squaer will be enter by the user.
// EX.  ****
//      ****
//      ****
//      ****

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


Q.2 // Printing the rectangle with stars, where length and breadth are entered by the user.
Ex. *******
    *******
    *******

# include<stdio.h>

int main(){
    int length, breadth;
    printf("What is the length of rectangle:\n");
    scanf("%d", &length);
    printf("What is the breadth of rectangle:\n");
    scanf("%d", &breadth);

    for(int i = 0; i < length; i++){
        for (int j = 0; j < breadth; j++){
            printf("*");
        }
        printf("\n");
    }
}


// Print star Pattern as follows where the number of lines is entered by the user.
/*
    *
    **
    ***
    May be called as half Pyramid.
*/

# include<stdio.h>

int main(){
    int lines;
    printf("Please enter the number of lines for the star pattern:\n");
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++){
        for (int j = 0; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    } 

    return 0;
}


// Print star Pattern as follows where the number of lines is entered by the user.
/*
    ***
    **
    *
    May be called as inverted half Pyramid.
*/

# include<stdio.h>

int main(){
    int lines;
    printf("Please enter the number of lines for the star pattern:\n");
    scanf("%d", &lines);

    for(int i = 0; i < lines; i++){
        for (int j = 0; j < lines - i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
