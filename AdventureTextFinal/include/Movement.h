#pragma once
#include "Commons.h"
// Clase que representa un movimiento en el juego.
class 
Movement {
public:
  // Constructor de la clase Movement.
  Movement(bool moveUp, bool moveLeft, bool moveRight, bool moveDown);
  // Realiza el movimiento según las direcciones especificadas.
  void 
  move();

private:
  bool
  m_moveUp; // Indica si se mueve hacia arriba.
  bool
  m_moveLeft;// Indica si se mueve hacia la izquierda.
  bool 
  m_moveRight;// Indica si se mueve hacia la derecha.
  bool 
  m_moveDown;// Indica si se mueve hacia abajo.
  int 
  m_choice; // Elección de movimiento.
};
