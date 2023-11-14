
#include "Movement.h"
// Constructor de la clase Movement.
Movement::Movement(bool moveUp, bool moveLeft, bool moveRight, bool moveDown)
  : m_moveUp(moveUp), m_moveLeft(moveLeft), m_moveRight(moveRight), m_moveDown(moveDown) {}
// Realiza el movimiento seg�n las direcciones especificadas.
void 
Movement::move() {
  cout << "Hacia donde te quieres mover? " << endl;
  cout << "1. Arriba" << endl;
  cout << "2. Izquierda" << endl;
  cout << "3. Derecha" << endl;
  cout << "4. Abajo" << endl;

  while (true) {
    cin >> m_choice;

    switch (m_choice) {
    case 1:
      if (m_moveUp) {
        cout << "Te has movido hacia el norte." << endl;
        return;
      }
      else {
        cout << "No puedes ir hacia el norte desde aqu�. Elige otra direcci�n." << endl;
      }
      break;

    case 2:
      if (m_moveLeft) {
        cout << "Te has movido hacia el oeste." << endl;
        return;
      }
      else {
        cout << "No puedes ir hacia el oeste desde aqu�. Elige otra direcci�n." << endl;
      }
      break;

    case 3:
      if (m_moveRight) {
        cout << "Te has movido hacia el este." << endl;
        return;
      }
      else {
        cout << "No puedes ir hacia el este desde aqu�. Elige otra direcci�n." << endl;
      }
      break;

    case 4:
      if (m_moveDown) {
        cout << "Te has movido hacia el sur." << endl;
        return;
      }
      else {
        cout << "No puedes ir hacia el sur desde aqu�. Elige otra direcci�n." << endl;
      }
      break;

    default:
      cout << "Esa no es una opci�n v�lida. Int�ntalo de nuevo." << endl;
      break;
    }
  }
}
