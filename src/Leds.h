#ifndef LEDS_H
#define LEDS_H

#include <iostream>

#define VERT 0x04
#define ROUGE 0x01
#define BLEU 0x02

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
