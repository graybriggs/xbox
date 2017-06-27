#ifndef CHUNK_MANAGER_HPP
#define CHUNK_MANAGER_HPP

// contains a list of chunks ...

// Chunk contains multiple blocks
// Engine contains multiple chunks

// to render all voxels in the world
// call the render function for each chunk

class ChunkManager {
public:

    // important that these functions are a subset of the full chunk list
    // they only contain a small number of chunks in the overall system and
    // represent chunks are different states during runtime

    void update(double dt, glm::vec3 camera_pos, glm::vec3 cam_view);
    // during an update a chunk generally goes through the following different states
    // 1. check if any chunks need to be loaded
    // 2. check if any chunks have been loaded but need to be setup, (voxel config., set active blocks, etc.)
    // 3. check if any chunks need to be rebuilt (ie. was modified last frame and needs mesh rebuild)
    // 4. check if any chunks need to be unloaded
    // 5. update chunk visibility list (list of chunks that could /potentially/ be rendered)
    // 6. update the render list

    // NOTE: the chunk visibility list is all chunks that could potentially be rendered. That is,
    // they are near the camera. So the render list takes all visible chunks and decides whether
    // they should be rendered
    // Having this distinction between these two contains is a good simple optimization


    void chunk_load_list(); // perhaps load chunks asynchronously
    void chunk_unload_list();
    void chunk_visibility_list();
    void chunk_setup_list();

    void chunk_render_list(); // used during render phase of chunk manager

private:

   std::vector<Chunk> render_list;
   std::vector<Chunk> visibility_list;
};

#endif // CHUNK_MANAGER_HPP
