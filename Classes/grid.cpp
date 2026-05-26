#include "grid.hpp"

grid::grid() {
    // Columns represent the vertical axis (y), lines represent the horizontal axis (x)
    for (int column = 0; column < GRID_HEIGHT; ++column) {
        for (int line = 0; line < GRID_WIDTH; ++line) {
            grid_array[column][line] = tetromino_type::NONE;
        }
    }
}

grid::~grid() {
    // No dynamic memory to clean up
}

tetromino_type grid::get_cell_type(position ph) const {
    if (ph.x < 0 || ph.x >= GRID_WIDTH || ph.y < 0 || ph.y >= GRID_HEIGHT) {
        return tetromino_type::NONE; // Out of bounds
    }
    return grid_array[ph.y][ph.x];
}