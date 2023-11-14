#include "Player.h"
#include "Enemy.h"
// Constructor de la clase Player.
Player::Player(const string& name, int health) : m_name(name), m_health(health) {}
// Realiza un ataque al enemigo especificado.
void 
Player::attack(Enemy* enemy) {
  if (enemy != nullptr) {
    int 
    damage = -20;
    enemy->setHealth(damage);
    cout << m_name << " ataca a " << enemy->getName() << " y le resta " << damage << " de salud." << endl;
  }
  else {
    cout << "No hay nada que atacar." << endl;
  }
}
// Establece la salud del jugador.
void 
Player::setHealth
(int health) {
  m_health += health;
}
// Obtiene la salud actual del jugador.
int 
Player::getHealth() const {
  return m_health;
}
// Obtiene el nombre del jugador.
string
Player::getName() const {
  return m_name;
}
// Establece el nombre del jugador.
void 
Player::setName
(const string& name) {
  m_name = name;
}
// Inicia un combate con el enemigo especificado.
void 
Player::combat
(Enemy* enemy) {
  cout << "�Combate iniciado! " << endl;
  attack(enemy);
}
// Recoge un �tem y lo agrega al inventario del jugador.
void 
Player::pickUpItem
(const Item& item) {
  m_inventory.push_back(item);
  cout << "Has recogido un " << item.getName() << "." << endl;
}
// Verifica si el jugador tiene un �tem espec�fico en su inventario.
bool 
Player::hasItem
(const string& itemName) const {
  for (const auto& item : m_inventory) {
    if (item.getName() == itemName) {
      return true;
    }
  }
  return false;
}
// Consume una poci�n de salud, incrementando la salud del jugador.
void
Player::consumePotion() {
  if (hasItem("Poci�n")) {
    setHealth(30);
    cout << "Has consumido una poci�n y recuperaste 30 de salud." << endl;
  }
  else {
    cout << "No tienes ninguna poci�n para consumir." << endl;
  }
}
