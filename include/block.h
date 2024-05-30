//
// Created by Vijay Goyal on 2024-05-29.
//

#ifndef BLOCKCHAIN_CPP_BLOCK_H
#define BLOCKCHAIN_CPP_BLOCK_H

#include <string>

class Block {
public:
    Block(int index, const std::string &data);

    std::string calculateHash() const;
    std::string getHash() const;
    std::string getPreviousHash() const;
    void setPreviousHash(const std::string &prevHash);

private:
    int index;
    std::string data;
    std::time_t timestamp;
    std::string previousHash;
    std::string Hash;
};

#endif //BLOCKCHAIN_CPP_BLOCK_H