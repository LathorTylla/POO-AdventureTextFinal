#include "Enemy.h"
#include "Player.h"
// Constructor de la clase Enemy.
Enemy::Enemy(const string& name, int health, int damage)
  : m_name(name), m_health(health), m_damage(damage) {}
// Realiza un ataque al jugador especificado.
void 
Enemy::attack(Player* player) {
  if (player != nullptr) {
    int 
    damage = -20;
    player->setHealth(damage);
    cout << m_name << " ataca a " << player->getName() << " y le resta " << damage << endl;
  }
  else {
    cout << "No hay nada que atacar." << endl;
  }
}
// Obtiene la salud actual del enemigo.
int 
Enemy::getHealth() const {
  return m_health;
}
// Obtiene el nombre del enemigo.
string 
Enemy::getName() const {
  return m_name;
}
// Obtiene el daño que inflige el enemigo.
int 
Enemy::getDamage() const {
  return m_damage;
}
// Establece la salud del enemigo.
void 
Enemy::setHealth(int health) {
  m_health += health;
}
