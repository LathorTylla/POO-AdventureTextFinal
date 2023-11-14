#include "FactoryEnemy.h"
#include "Enemy.h"
// Implementación de la función de creación de enemigos.
Enemy* 
ConcreteEnemyFactory::createEnemy(const string& name, int health, int damage) {
  return new Enemy(name, health, damage);
}
