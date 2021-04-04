#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ROCK        0
#define PAPER       1
#define SCISSORS    2

// insert your code here


int main() {
    unsigned A, B;
    scanf("%d %d", &A, &B);

    if ((A < 3 && B < 3) && (A >= 0 && B >= 0)) {
        switch ((A - B)) {
        case 1: case -2 : printf("A wins.\n"); break;
        case -1: case 2 : printf("B wins.\n"); break;
        case 0: printf("Game drew.\n"); break;
        }
    }
    else {
        printf("잘못된 값을 입력하셨습니다.");
    }
}