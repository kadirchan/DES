#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "Encrypt.h"
#include "Decrypt.h"
#include "Helper.h"

int main() {
    uint64_t data = 0x4e6f772069732074; // Example data
    uint64_t key = 0x0123456789abcdef; // Example key
    
    printf("Original data: %lx\n", data);

    encrypt(&data, key);
    printf("Encrypted data: %lx\n", data);

    decrypt(&data, key);
    printf("Decrypted data: %lx\n", data);

    return 0;
}