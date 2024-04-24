#include <stdio.h>


void display(int x[]);

int main() {
    int num[] = {10, 15, 12, 10, 52};
    display(num);
    return 0;
}

void display(int x[]) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", x[i]);
}
}
