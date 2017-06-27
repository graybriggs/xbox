#ifndef CHUNK_HPP
#define CHUNK_HPP

#include "config.hpp"

#include <memory>

class Chunk {
public:

    Chunk();
    ~Chunk();

    Block* access_block(int x, int y, int z);

    void create_mesh();

    void update(double dt);
    void render(Renderer* renderer);

private:
    Block* blocks;
    //std::unique_ptr<Block> blocks;

};

#endif // CHUNK_HPP
