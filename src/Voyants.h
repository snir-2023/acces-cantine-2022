#ifndef VOYANTS_H
#define VOYANTS_H

#include <iostream>

#define VERT 0x04
#define ROUGE 0x01
#define BLEU 0x02

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
