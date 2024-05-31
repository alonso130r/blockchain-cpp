//
// Created by Vijay Goyal on 2024-05-29.
//

#include "../include/block.h"
#include "../include/sha256.h"
#include <iostream>
#include <sstream>

Block::Block(int idx, const std::string &data) : index(idx), data(data), timestamp(std::time(nullptr)), previousHash(""), hash(calculateHash()) {}

std::string Block::calculateHash() const {
    std::stringstream ss;
    ss << index << data << timestamp << previousHash;

    std::string input = ss.str();
    unsigned char hash[32];
    SHA256_CTX ctx;
    sha256_init(&ctx);
    sha256_update(&ctx, reinterpret_cast<const unsigned char*>(input.c_str()), input.size());
    sha256_final(&ctx, hash);

    std::stringstream hashString;
    for (int i = 0; i < 32; ++i) {
        hashString << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }

    return hashString.str();
}

std::string Block::getHash() const {
    return Hash;
}

std::string Block::getPreviousHash() const {
    return previousHash;
}

void Block::setPreviousHash(const std::string &prevHash) {
    previousHash = prevHash;
}