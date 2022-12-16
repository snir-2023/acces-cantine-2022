#include "Leds.h"

using namespace std;

Leds::Leds()
{
    cout << "Leds cree" << endl;
    //ctor
}

Leds::~Leds()
{
    //dtor
}

void Leds::allumer(int couleur) {
    cout << "Allumer leds en couleur " << couleur << endl;
    
    int fd = -1;
	unsigned long val;
    fd = open("/dev/gpio", O_RDWR); //ouverture du port GPIO
    val=couleur;
    ioctl(fd, GPIO_CMD_SET_LEDS, &val); //change la couleur des leds

    close(fd); //fermeture GPIO

}
