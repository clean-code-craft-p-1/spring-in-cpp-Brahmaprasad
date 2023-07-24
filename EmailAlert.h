#pragma once

#include "IAlerter.h"

class EmailAlert : public IAlerter
{
public:
    bool emailSent;
    EmailAlert();
    ~EmailAlert();

private:
    void Alert();
};
