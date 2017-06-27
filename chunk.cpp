
#include "chunk.hpp"


Chunk::Chunk() {

    // a chunk is CHUNK_SIZE * CHUNK_SIZE * CHUNK_SIZE;

    blocks = new Block[config::CHUNK_SIZE * config::CHUNK_SIZE * config::CHUNK_SIZE];

}

Chunk::~Chunk() {

    delete[] blocks;
}

Block* Chunk::access_block(int x, int y, int z) {
    return blocks[(z * config::CHUNK_SIZE) + (y * config::CHUNK_SIZE) + x];
}
