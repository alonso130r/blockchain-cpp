//
// Created by Vijay Goyal on 2024-05-29.
//

#include "block.h"
#include <iostream>
#include <ctime>

Block::Block(int idx, const std::string &data) : index(idx), data(data), timestamp(std::time(nullptr)), previousHash(""), hash(calculateHash()) {}

std::string Block::calculateHash() const {
    // add custom sha256
}