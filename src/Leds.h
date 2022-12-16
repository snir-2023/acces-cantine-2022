#ifndef LEDS_H
#define LEDS_H

#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include "vsopenrisc.h"

#define ROUGE 0x01
#define BLEU 0x02
#define VERT 0x04

class Leds
{
    public:
        Leds();
        virtual ~Leds();
        void allumer(int couleur);

    protected:

    private:
};

#endif // LEDS_H
