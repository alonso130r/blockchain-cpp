//
// Created by Vijay Goyal on 2024-05-30.
//

#include "blockchain.h"
#include <iostream>

Blockchain::Blockchain() {
    chain.emplace_back(Block(0, "Genesis Block"));
}

void Blockchain::addBlock(const int &newBlock) {
    Block block = newBlock;
    block.setPreviousHash(chain.back().getHash());
    chain.push_back(block);
}

void Blockchain::printChain() const {
    for (const auto &block : chain) {
        std::cout << "Block #" << block.calculateHash() << std::endl;
        std::cout << "Previous Hash: " << block.getPreviousHash() << std::endl;
        std::cout << "Hash: " << block.getHash() << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
}