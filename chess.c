#include <stdio.h>

#define SIZE 8

int main()
{
    char chessboard[SIZE][SIZE]
            = {"rnbqkbnr",
               "pppppppp",
               "        ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBQKBNR"};
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c", chessboard[i][j]);
        }
        printf("\n");
    }
    return 0;
}
