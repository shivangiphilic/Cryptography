#include <stdio.h>

unsigned long djb2_hash(const char *str) {
    unsigned long hash = 5381;
    int c;

    while ((c = *str++)) {
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }

    return hash;
}

int main() {
    const char *message = "Hello, World!";
    unsigned long hash_value = djb2_hash(message);

    printf("Original Message: %s\n", message);
    printf("Hash Value: %lu\n", hash_value);

    return 0;
}
