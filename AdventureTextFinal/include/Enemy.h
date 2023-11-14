#pragma once
#include "Commons.h"

// Clase que representa a un enemigo en el juego.

class 
Player;

class 
Enemy {
public:
  // Constructor de la clase Enemy.
  Enemy
  (const string& name, int health, int damage);

  // Realiza un ataque al jugador especificado.
  void
  attack
  (Player* player);

  // Obtiene la salud actual del enemigo.
  int
  getHealth() const;
  // Obtiene el nombre del enemigo.
  string
  getName() const;
  // Obtiene el daño que inflige el enemigo.
  int
  getDamage() const;
  // Establece la salud del enemigo.
  void
  setHealth(int health);

private:
  int 
  m_health; //Salud del enemigo
  string //Nombre del enemigo
  m_name;
  int
  m_damage; //Daño del enemigo
};
