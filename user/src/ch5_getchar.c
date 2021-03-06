#include <string.h>
#include <stdio.h>

const uint64 N = 10;

int main() {
    printf("please enter %lu letters.\n", N);
    char line[N];
    memset(line, 0, N);
    for (int idx = 0; idx < N; ++idx) {
        char c = getchar();
        line[idx] = c;
    }
    printf("%lu letters entered\n", N);
    for (int idx = 0; idx < N; ++idx) {
        putchar(line[idx]);
    }
    puts(" TEST getchar passed!\n");
    return 0;
}