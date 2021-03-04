#include "gameOfLife.h"

void
gameOfLifeBaseline(const int board_width,
        const int number_of_generations,
        const BoundaryCondition boundary_condition,
        const InitialCondition initial_condition)
{
    const dim3 dimBlock(32,32);
    const int gridWidth = ceil( ((float)board_width)/32 );
    const dim3 dimGrid(gridWidth, gridWidth);

    switch(initial_condition) {
        case (InitialCondition::RANDOM):
            // initialize board randomly
            break;
        case (InitialCondition::CUSTOM):
            // initial board user input
            break;
    }
}
