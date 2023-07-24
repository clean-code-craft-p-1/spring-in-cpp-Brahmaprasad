#include "LEDAlert.h"

LEDAlert::LEDAlert()
{
    ledGlows = false;
};

LEDAlert::~LEDAlert() 
{

};

void LEDAlert::Alert()
{
    ledGlows = true;
}