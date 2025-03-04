#pragma once
#include <math.h>
#include "constants.h"

namespace dsp::math {
    inline double freqToOmega(double freq, double samplerate) {
        return 2.0 * DB_M_PI * (freq / samplerate);
    }
}