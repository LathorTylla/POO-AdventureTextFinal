#pragma once
#include "Commons.h"
class
Enemy;
// creaci�n de enemigos.
class
EnemyFactory {
public:
  virtual
    Enemy*
    createEnemy(const string& name, int health, int damage) = 0;
  virtual
  ~EnemyFactory() = default;
};

class
 ConcreteEnemyFactory : 
 public EnemyFactory {

public:
  Enemy*
  createEnemy(const string& name, int health, int damage) override;
};
