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
  cout << "¡Combate iniciado! " << endl;
  attack(enemy);
}
// Recoge un ítem y lo agrega al inventario del jugador.
void 
Player::pickUpItem
(const Item& item) {
  m_inventory.push_back(item);
  cout << "Has recogido un " << item.getName() << "." << endl;
}
// Verifica si el jugador tiene un ítem específico en su inventario.
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
// Consume una poción de salud, incrementando la salud del jugador.
void
Player::consumePotion() {
  if (hasItem("Poción")) {
    setHealth(30);
    cout << "Has consumido una poción y recuperaste 30 de salud." << endl;
  }
  else {
    cout << "No tienes ninguna poción para consumir." << endl;
  }
}
