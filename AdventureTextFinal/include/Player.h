#pragma once
#include "Commons.h"
#include "Enemy.h"
#include "Item.h"

//Clase que representa al jugador en el juego.
class 
Player {
public:
  /*
     Constructor de la clase Player.
     name Nombre del jugador.
     health Salud inicial del jugador.
   */
  Player
  (const string& name, int health);

  /*
    Realiza un ataque al enemigo especificado.
    enemy Enemigo al que se realizará el ataque.
   */
  void 
  attack
  (Enemy* enemy);

  /*
    Establece la salud del jugador.
    health Nueva salud del jugador.
   */
  void 
  setHealth
  (int health);

  /*
    Obtiene la salud actual del jugador.
    La salud actual del jugador.
   */
  int 
  getHealth() const;

  /*
    Obtiene el nombre del jugador.
    El nombre del jugador.
   */
  string
  getName() const;

  /*
    Establece el nombre del jugador.
    name Nuevo nombre del jugador.
   */
  void 
  setName
  (const string& name);

  /*
    Inicia un combate con el enemigo especificado.
    enemy Enemigo con el que se inicia el combate.
   */
  void 
  combat
  (Enemy* enemy);

  /*
    Recoge un ítem y lo agrega al inventario del jugador.
    item Ítem que se va a recoger.
   */
  void 
  pickUpItem
  (const Item& item);

  /*
    Verifica si el jugador tiene un ítem específico en su inventario.
    itemName Nombre del ítem a verificar.
    True si el jugador tiene el ítem, False en caso contrario.
   */
  bool 
  hasItem
  (const string& itemName) const;

  /*
   Consume una poción de salud, incrementando la salud del jugador.
   */
  void 
  consumePotion();

private:
  int 
  m_health;    // Salud actual del jugador.
  string
  m_name;      // Nombre del jugador.
  vector<Item> 
  m_inventory; // Inventario del jugador.
};
