#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "Helper.h"

void encrypt(
    uint64_t *data,
    uint64_t key
    ) {
    uint64_t roundKeys[16];
    generateRoundKeys(key, roundKeys);

    initialPermutation(data);

    for (int i = 0; i < 16; i++)
    {
        DESRound(data, roundKeys[i]);
    }
    uint32_t left = (uint32_t) (*data >> 32) & 0x00000000ffffffff;
    uint32_t right = (uint32_t) *data & 0x00000000ffffffff;
    *data = (((uint64_t)right) << 32) | (uint64_t)left;
    finalPermutation(data);
}