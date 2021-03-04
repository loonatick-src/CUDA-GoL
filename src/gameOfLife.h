#ifndef GAME_OF_LIFE_H
#define GAME_OF_LIFE_H
enum BoundaryCondition {
    PERIODIC,
    STATIC
};


enum InitialConditions {
    RANDOM,
    CUSTOM
};


void
gameOfLifeBaseline(const dim3 board_width,
        const int number_of_generations,
        BoundaryCondition boundary_condition,
        InitialConditions initial_condition);

/*
__global__
void
gameOfLifeBaselineKernel();
*/
#endif
