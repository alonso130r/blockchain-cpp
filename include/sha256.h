//
// Created by Vijay Goyal on 2024-05-29.
//

#ifndef BLOCKCHAIN_CPP_SHA256_H
#define BLOCKCHAIN_CPP_SHA256_H

#include <cstddef>
#include <cstdint>

typedef struct {
    uint8_t data[64];
    uint32_t datalen;
    uint64_t bitlen;
    uint32_t state[8];
} SHA256_CTX;

void sha256_init(SHA256_CTX *ctx);
void sha256_update(SHA256_CTX *ctx, const unsigned char data[], size_t len);
void sha256_final(SHA256_CTX *ctx, unsigned char hash[]);

#endif //BLOCKCHAIN_CPP_SHA256_H