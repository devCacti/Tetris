#include "position.hpp"

position::position() {
    // Initialize the position to (0, 0)
    x = 0;
    y = 0;
}

position::position(int x, int y) {
    // Initialize the position to the given coordinates
    this->x = x;
    this->y = y;
}

position::~position() {
    // Destructor (no dynamic memory to clean up in this case)
}