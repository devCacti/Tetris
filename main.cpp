#include "position.hpp"
#include "tetromino.hpp"
#include "tetromino_type.hpp"
#include "grid.hpp"

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "This is a simple C++ test program." << std::endl;

    grid game_grid; // Create a game grid
    const position centered_pos(GRID_WIDTH / 2, 0); // Create a position at the center of the grid
    bool quit = false;

    // Game loop
    while (!quit) {

        tetromino current_piece(tetromino_type::T, &game_grid); // Create a T-shaped tetromino
        
    }
    


    return 0;
}