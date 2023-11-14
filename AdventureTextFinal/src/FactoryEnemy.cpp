#include "FactoryEnemy.h"
#include "Enemy.h"
// Implementaci�n de la funci�n de creaci�n de enemigos.
Enemy* 
ConcreteEnemyFactory::createEnemy(const string& name, int health, int damage) {
  return new Enemy(name, health, damage);
}
