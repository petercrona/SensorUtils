#include "StreamStats.h"
#include <math.h>

StreamStats::StreamStats() {
  nrValues_ = 0;
  currentMean_ = -1;
  currentVarianceHelperValue_ = 0;
}

void StreamStats::reportNumber(int n) {
  double prevMean = currentMean_;
  currentMean_ += ((n - prevMean) / (nrValues_ + 1));
  currentVarianceHelperValue_ += (n - prevMean) * (n - currentMean_);
  nrValues_++;
}

double StreamStats::average() {
  return currentMean_;
}

double StreamStats::variance() {
  return currentVarianceHelperValue_ / (nrValues_ - 1);
}

double StreamStats::stdDev() {
  return sqrt(variance());
}
