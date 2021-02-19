#ifndef SamplesPerSensorOptimizerConfig_h
#define SamplesPerSensorOptimizerConfig_h

#define VARIABLE_NAME samplesPerSensorOptimizer
#define MAX_TIME_IN_MS_TO_SAMPLE 1000
#define SAMPLES_FOR_CALIBRATION 1000

// All digital sensors go here
DigitalSensorRead digitalSensorReadersArray[] = {
  // @TODO ADD HUMIDITY-TEMP SENSOR
};

AnalogSensorReader analogSensorReaderArray[] = {
  {A0, []()->int { return analogRead(A0); }}
  // ADD O3 SENSOR
  // ADD O3 SENSOR
};

// TL;DR Boilerplate below
// @todo Get rid of it :)

DigitalSensorReaders digitalSensorReaders {
  digitalSensorReadersArray,
  sizeof(digitalSensorReadersArray) / sizeof(digitalSensorReadersArray[0])
};

AnalogSensorReaders analogSensorReaders {
  analogSensorReaderArray,
  sizeof(analogSensorReaderArray) / sizeof(analogSensorReaderArray[0])
};

SamplesPerSensorOptimizer VARIABLE_NAME { 
  digitalSensorReaders, 
  analogSensorReaders, 
  MAX_TIME_IN_MS_TO_SAMPLE,
  SAMPLES_FOR_CALIBRATION
};

#endif
