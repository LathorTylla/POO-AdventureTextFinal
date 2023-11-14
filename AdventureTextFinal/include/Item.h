#pragma once
#include "Commons.h"

//Clase que representa un ítem en el juego.
class
Item {
public:
  /*
  Constructor de la clase Item.
  name Nombre del ítem.
  value Valor del ítem.
*/
  Item
  (const string& name, int value);
  string
  getName() const;
  int
  getValue() const;

private:
  string
  m_name; //Nombre dek item
  int
  m_value; //Valor del item
};
