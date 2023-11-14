#pragma once
#include "Commons.h"
#include "Enemy.h"
// Clase que representa una sala en el juego.

class 
Room {
public:
  // Constructor de la clase Room.
  Room
  (const string& name, const string& description);
  // Obtiene la descripción de la sala. 
  string
  getDescription() const; 
  // Obtiene el nombre de la sala.
  string
  getName() const;

private:
  string 
  m_name;// Nombre de la sala.
  string 
  m_description;// Descripción de la sala.
  vector
  <Enemy*>
  m_enemies; // Vector de punteros a enemigos en la sala.
};
