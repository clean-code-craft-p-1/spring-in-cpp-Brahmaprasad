#pragma once
#include "IAlerter.h"

class LEDAlert : public IAlerter
{
public:
    bool ledGlows;

    LEDAlert();
    ~LEDAlert();

private:
    void Alert();
};

