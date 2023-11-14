#pragma once
#include "Commons.h"

//Clase que representa un �tem en el juego.
class
Item {
public:
  /*
  Constructor de la clase Item.
  name Nombre del �tem.
  value Valor del �tem.
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
