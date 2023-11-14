#include "Room.h"
#include "Enemy.h"
// Constructor de la clase Room.
Room::Room(const string& name, const string& description) : m_name(name), m_description(description) {}
// Obtiene la descripción de la sala.
string 
Room::getDescription() const {
  return m_description;
}
// Obtiene el nombre de la sala.
string 
Room::getName() const {
  return m_name;
}
