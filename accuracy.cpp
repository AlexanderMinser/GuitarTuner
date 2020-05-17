
#include "accuracy.h"

//note frequencies, high e (idx 0) to low e (idx 5)
//TODO: this will not compile, you need to 
//      convert these numbers into their ADC equivalent 
uint16_t noteFreqs[] = {
    329.63,
    246.94,
    196.00,
    146.83,
    110.00,
    82.41
}

uint16_t findExpectedNote() {
    uint16_t freq = ;//TODO: read this value from ADC buffer
    uint16_t minDiff = ;//TODO: find init value for this
    int32_t diff;
    for(int i=0; i < NUM_OF_NOTES; i++) {
        diff = std::abs(freq - noteFreqs[i]);
        //TODO: make sure diff is never a value minDiff can't support (or change minDIFF type)
        minDiff = diff < minDiff ? diff ? minDiff;
    }
}


void checkAccuracy() {
    

}