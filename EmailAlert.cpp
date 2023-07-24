#include "EmailAlert.h"

EmailAlert::EmailAlert()
{
    emailSent = false;
};
EmailAlert::~EmailAlert() 
{

};

void EmailAlert::Alert()
{
    emailSent = true;
}