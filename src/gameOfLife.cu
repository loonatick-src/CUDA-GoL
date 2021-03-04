#include "gameOfLife.h"


void
gameOfLifeBaseline(const int board_width,
        const int number_of_generations,
        const BoundaryCondition boundary_condition,
        Board_t initial_conditions)
{
    const dim3 dimBlock(32,32);
    const int gridWidth = ceil( ((float)board_width)/32 );
    const dim3 dimGrid(gridWidth, gridWidth);
      
    /* TODO: refer to CUDA C++ Programming Guide, section 3.2.4
     * specifically their implementation of the matrix struct
     * and its associated __device__ functions
     */
}
