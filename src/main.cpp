//
// Created by Vijay Goyal on 2024-05-31.
//

#include <iostream>
#include "../include/blockchain.h"
#include "../include/block.h"

int main() {
    Blockchain bChain = Blockchain();

    bChain.addBlock(Block(1, "Block 1 Data"));
    bChain.addBlock(Block(2, "Block 2 Data"));

    bChain.printChain();

    return 0;
}