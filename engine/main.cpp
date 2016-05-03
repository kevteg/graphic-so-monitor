/*
Autores:
    Kevin Hernández
    Estefany Salas
*/

#include "engi.h"

int main(int argc, char *argv[]){
  engi *sys_en = new engi(argc, argv);
  cout << sys_en->execute();
  return 0;
}
