#ifndef BLOCK_HPP
#define BLOCK_HPP

enum class BlockType {

    BlockType_Default = 0,

    BlockType_Grass,
    BlockType_Dirt,
    BlockType_Water,
    BlockType_Stone,
    BlockType_Wood,
    BlockType_Sand,

    BlockType_NumTypes

};

class Block {
public:

    bool is_active() const;
    void set_active(bool active);

private:

    bool block_active;
    BlockType block_type;
};

#endif // BLOCK_HPP
