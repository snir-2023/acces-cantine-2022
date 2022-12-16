#include "Buzzer.h"


using namespace std;

Buzzer::Buzzer()
{
    cout << "Buzzer cree" << endl;
    //ctor
}

Buzzer::~Buzzer()
{
    //dtor
}

void Buzzer::bip(int nb) {
    cout << "on bippe " << nb << " fois" << endl;
    int fd = -1;
	unsigned long val;
    fd = open("/dev/gpio", O_RDWR); //ouverture du port GPIO
    for (int i=0;i<nb;i++) {
        val=1;
        ioctl(fd, GPIO_CMD_SET_BUZZER, &val); //buzzer ON
        usleep(300000); //attente 300ms
        val=0;
        ioctl(fd, GPIO_CMD_SET_BUZZER, &val); //buzzer OFF
        if (i<nb-1) { //ce n'est pas le dernier bip
            usleep(300000); //attente 300ms entre chaque bip
        }
    }
    close(fd); //fermeture GPIO

}
