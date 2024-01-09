#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

typedef struct {
    int numRoots; // Количество корней: 0, 1, 2 или -1, если уравнение не квадратное
    double root1; // Первый корень
    double root2; // Второй корень
} Roots;

Roots squares(double a, double b, double c) {
    Roots result;
    double d;

    if (a == 0) {
        result.numRoots = -1; // Уравнение не квадратное
        return result;
    }

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        result.numRoots = 2;
        result.root1 = (-b + sqrt(d)) / (2 * a);
        result.root2 = (-b - sqrt(d)) / (2 * a);
    } else if (d == 0) {
        result.numRoots = 1;
        result.root1 = -b / (2 * a);
    } else {
        result.numRoots = 0;
    }
    return result;
}


void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
