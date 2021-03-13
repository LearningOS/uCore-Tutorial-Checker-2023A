#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

int main() {
    char* test_str = "Hello, world!";
    char* fname = "fname";
    int fd = open(fname, O_CREATE | O_WRONLY);
    assert(fd > 0);
    write(fd, test_str, strlen(test_str));
    close(fd);

    fd = open(fname, O_RDONLY);
    assert(fd > 0);

    char buffer[100];
    memset(buffer, 0, sizeof(buffer));
    int read_len = read(fd, &buffer, sizeof(buffer));
    close(fd);

    assert(strncmp(buffer, test_str, read_len) == 0);
    puts("TEST file0 OK!\n");
    return 0;
}