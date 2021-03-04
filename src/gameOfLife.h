#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H
enum BoundaryCondition {
    PERIODIC,
    STATIC
};


enum InitialCondition {
    RANDOM,
    CUSTOM
};


// the pointer elements can also be a device pointer
typdef struct {
    // nice 128 bit aligned struct
    int width;
    int height;
    int *elements;
} Board_t;


void
gameOfLifeBaseline(const dim3 board_width,
        const int number_of_generations,
        BoundaryCondition boundary_condition,
        Board_t initial_conditions);

/*
__global__
void
gameOfLifeBaselineKernel();
*/
#endif
