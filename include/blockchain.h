//
// Created by Vijay Goyal on 2024-05-30.
//

#ifndef BLOCKCHAIN_CPP_BLOCKCHAIN_H
#define BLOCKCHAIN_CPP_BLOCKCHAIN_H

#include <vector>
#include "block.h"

class Blockchain {
public:
    Blockchain();

    void addBlock(const Block &newBlock);
    void printChain() const;

private:
    std::vector<Block> chain;
};

#endif //BLOCKCHAIN_CPP_BLOCKCHAIN_H
