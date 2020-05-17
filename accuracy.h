

#ifndef ACCURACY_H
#define ACCURACY_H

#define NUM_OF_NOTES (6)

enum notes {
    E_HIGH,
    B,
    G,
    D,
    A,
    E_LOW
};


//function prototypes
uint8_t findExpectedNote();
void checkAccuracy();


#endif