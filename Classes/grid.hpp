#include "tetromino_type.hpp"
#include "position.hpp"

class grid {
public:
    grid();
    ~grid();

    tetromino_type get_cell_type(position ph) const;

private:
    int grid_array[20][10];
};