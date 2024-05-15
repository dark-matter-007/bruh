// Patterns


// *
// **
// ***
// ****

#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


# --------------------------

// *****
// ****
// ***
// **
// *


#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


# -----------------------------

//         * 
//        * * 
//       * * * 
//      * * * * 
//     * * * * * 
//    * * * * * * 
//   * * * * * * * 
//  * * * * * * * * 
// * * * * * * * * *

#include <stdio.h>

int main() {
    int rows, space;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; ++i) {
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15



#include <stdio.h>

int main() {
    int rows, number = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
    
    return 0;
}

