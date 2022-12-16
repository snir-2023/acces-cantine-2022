#ifndef VOYANTS_H
#define VOYANTS_H

#include <iostream>

#define ROUGE 0x01
#define BLEU 0x02
#define VERT 0x04

class Voyants
{
    public:
        Voyants();
        virtual ~Voyants();
        void allumer(int couleur);

    protected:

    private:
};

#endif // VOYANTS_H
