#ifndef BUZZER_H
#define BUZZER_H

#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include "vsopenrisc.h"

class Buzzer
{
    public:
        Buzzer();
        virtual ~Buzzer();
        void bip(int nb);

    protected:

    private:
};

#endif // BUZZER_H
