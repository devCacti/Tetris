#include "tetromino.hpp"

tetromino::tetromino() {
    // Initialize the tetromino's position and shape
    pos = position(); // Start at the default position (0, 0)
}

position tetromino::get_position() const {
    return this->pos;
}

bool tetromino::move_left() {
    pos.x -= 1;
    return true;
}