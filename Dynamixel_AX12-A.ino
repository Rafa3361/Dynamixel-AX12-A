#include <AX12A.h> 

#define DirectionPin  (1u) // Porta digital sempre 1 (TX)
#define BaudRate    (1000000ul)
#define ID    (6u) // ID do motor


void setup()
{
 ax12a.begin(BaudRate, DirectionPin, &Serial);
 ax12a.setEndless(ID, ON);
 
}

void loop()
{ 
    ax12a.ledStatus(ID, ON); // Controle do led 
    ax12a.turn(ID, RIGHT, 1000); // Valor de 0 à 1023 (1024 bits)
}


// Para ter acesso a todos os comandos da biblioteca:
// https://github.com/jumejume1/AX-12A-servo-library/blob/master/keywords.txt
