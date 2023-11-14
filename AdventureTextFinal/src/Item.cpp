#include "Item.h"
// Constructor de la clase Item.
Item::Item(const string& name, int value) : m_name(name), m_value(value) {}
// Obtiene el nombre del ítem.
string 
Item::getName() const {
  return m_name;
}
// Obtiene el valor del ítem.
int 
Item::getValue() const {
  return m_value;
}
