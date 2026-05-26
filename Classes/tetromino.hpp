#include "tetromino_type.hpp"
#include "position.hpp"
#include "grid.hpp"
#include <array>

class tetromino {
public:
    tetromino(); // Constructor
    tetromino(tetromino_type shape, grid* game_grid); // Constructor with parameters
    ~tetromino(); // Destructor

    position get_position() const; // Returns the current position of the tetromino

    bool move_left();
    bool move_right();
    bool move_down();
    bool rotate();
    bool ground(); // Will make the tetromino fall to the ground immediately

    tetromino_type get_shape() const; // Returns the shape of the tetromino


private:
    std::array<position, 4> blocks; // The 4 blocks that make up the tetromino

    grid* game_grid; // Pointer to the game grid for collision detection

    position pos; // Position of the tetromino

    tetromino_type shape; // Shape of the tetromino (e.g., I, O, T, S, Z, J, L)
};