#ifndef HELPER_H
#define HELPER_H

#include <stdint.h>

void DESRound(uint64_t *data, uint64_t roundKey);
void DESRound(uint64_t *data, uint64_t roundKey);
void initialPermutation(uint64_t *data);
void finalPermutation(uint64_t *data);
void generateRoundKeys(uint64_t key, uint64_t *roundKeys);
uint32_t permute(uint32_t substitutedHalfBlock);
uint64_t expand(uint32_t halfBlock);
uint32_t substitute(uint64_t expandedHalfBlock);

#endif