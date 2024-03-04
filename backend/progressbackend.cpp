#include "progressbackend.h"

#include <cstdlib>
#include <ctime>

ProgressBackend::ProgressBackend() {
    std::srand(std::time(nullptr));
}

int ProgressBackend::getProgressValue() {
    return std::rand()/((RAND_MAX + 1u)/100);
}
