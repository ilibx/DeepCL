#pragma once

#include "Propagate.h"

class Propagate3 : public Propagate {
public:
    CLKernel *kernel;

    // [[[cog
    // import cog_addheaders
    // cog_addheaders.add()
    // ]]]
    // generated, using cog:
    Propagate3( OpenCLHelper *cl, LayerDimensions dim, ActivationFunction const*fn );
    VIRTUAL ~Propagate3();
    VIRTUAL void propagate( int batchSize, CLWrapper *dataWrapper, CLWrapper *weightsWrapper, CLWrapper *biasWeightsWrapper,
    CLWrapper *resultsWrapper );

    // [[[end]]]
};
