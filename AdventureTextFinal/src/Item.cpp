#include "Item.h"
// Constructor de la clase Item.
Item::Item(const string& name, int value) : m_name(name), m_value(value) {}
// Obtiene el nombre del �tem.
string 
Item::getName() const {
  return m_name;
}
// Obtiene el valor del �tem.
int 
Item::getValue() const {
  return m_value;
}
