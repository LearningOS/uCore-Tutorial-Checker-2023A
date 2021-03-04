#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

int main() {
    uint64 start = get_time();
    printf("current time_msec = %lu", start);
    sleep(100);
    uint64 end = get_time();
    printf("time_msec = %lu after sleeping 100 ticks, delta = %lums!", end, end - start);
    puts("TEST sleep1 passed!");
    return 0;
}