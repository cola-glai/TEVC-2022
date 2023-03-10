#pragma once
#include "core/global.h"
#include "core/individual.h"
#include "core/utility.h"

namespace emoc {

	// simulated binary crossover
	void SBX(Individual *parent1, Individual *parent2, Individual *offspring1, Individual *offspring2, Global *g_GlobalSettings);

    void SinglePointCrossover(Individual *parent1, Individual *parent2, Individual *offspring1, Individual *offspring2, Global *g_GlobalSettings);
    void BinaryCrossover(Individual *parent1, Individual *parent2, Individual *offspring1, Individual *offspring2, Global *g_GlobalSettings);
}