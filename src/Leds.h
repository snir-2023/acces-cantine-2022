#ifndef LEDS_H
#define LEDS_H

#include <iostream>

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
