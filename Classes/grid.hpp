#include "tetromino_type.hpp"
#include "position.hpp"

#define GRID_WIDTH 10
#define GRID_HEIGHT 20

class grid {
public:
    grid();
    ~grid();

    tetromino_type get_cell_type(position ph) const;

private:
    tetromino_type grid_array[GRID_HEIGHT][GRID_WIDTH];
};