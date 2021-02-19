#include "SamplesPerSensorOptimizer.h"
#include "SamplesPerSensorOptimizerConfig.h"

void setup() {
    Serial.begin(9600);
}

void loop() {
    samplesPerSensorOptimizer.printOptProblemForWolframAlpha();
    delay(1000);
}
