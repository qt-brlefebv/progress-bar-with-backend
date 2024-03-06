#include "ProgressProvider.h"

#include <cstdlib>
#include <ctime>

ProgressProvider::ProgressProvider() {
    std::srand(std::time(nullptr));
}

int ProgressProvider::progress() {
    return std::rand()/((RAND_MAX + 1u)/100);
}
