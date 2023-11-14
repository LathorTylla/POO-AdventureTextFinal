#include "Commons.h"
#include "Enemy.h"
#include "Player.h"
#include "FactoryEnemy.h"
#include "Item.h"
#include "Room.h"
#include "Movement.h"

int main() {
  // Crear instancias de las clases
  Player 
  player
  ("Madeleine <3", 100);
  Item 
  potion
  ("Poción de Salud", 20);
  Item 
  sword
  ("Espada", 30);
  Item 
  bow
  ("Arco", 25);
  Item 
  shield
  ("Escudo", 20);
  Item 
  key
  ("Llave", 1);
  Item 
  armor
  ("Armadura", 40);
  Item 
  potion2
  ("Poción de Energía", 25);
  Item 
  dagger
  ("Daga", 15);
  Item 
  torch
  ("Antorcha", 10);

  // Crear instancias de enemigos
  ConcreteEnemyFactory enemyFactory;
  Enemy* 
  enemy1 = enemyFactory.createEnemy
  ("Goblin", 50, 15);
  Enemy* 
  enemy2 = enemyFactory.createEnemy
  ("Ogro", 80, 20);
  Enemy* 
  enemy3 = enemyFactory.createEnemy
  ("Esqueleto", 60, 18);
  Enemy* 
  enemy4 = enemyFactory.createEnemy
  ("Araña Gigante", 70, 25);
  Enemy* 
  enemy5 = enemyFactory.createEnemy
  ("Lobo", 45, 12);
  Enemy* 
  enemy6 = enemyFactory.createEnemy
  ("Bruja", 55, 22);
  Enemy* 
  enemy7 = enemyFactory.createEnemy
  ("Demonio", 90, 30);
  Enemy* 
  enemy8 = enemyFactory.createEnemy
  ("Vampiro", 75, 28);
  Enemy* 
  enemy9 = enemyFactory.createEnemy
  ("Zombi", 40, 10);
  Enemy* 
  enemy10 = enemyFactory.createEnemy
  ("Hombre Lobo", 85, 35);

  // Crear instancias de las salas
  Room 
  room1
  ("Sala de Inicio", "Una habitación iluminada con una puerta al norte.");
  Room 
  room2
  ("Sala Oscura", "Una habitación oscura con un pasillo al sur.");
  Room
  room3
  ("Sala de Enemigos", "Una habitación llena de enemigos.");
  Room
  room4
  ("Sala de Tesoros", "Una habitación llena de tesoros y luces brillantes.");
  Room
  room5
  ("Sala Secreta", "Una sala oculta con un camino a la derecha.");
  Room 
  room6
  ("Sala de Decisiones", "Una habitación con múltiples caminos.");
  Room
  room7
  ("Sala Desafiante", "Una sala desafiante con enemigos fuertes.");
  Room 
  room8
  ("Sala de Descanso", "Una sala tranquila para descansar.");
  Room
  room9
  ("Sala Final", "La última sala antes de la salida.");
  Room
  room10
  ("Sala de Salida", "La sala final, ¡has escapado!");

  // Inventario del jugador
  vector
  <Item>
  inventory;

  // Ejemplo de uso de las clases y movimientos entre salas
  cout << "Bienvenido al juego!" << endl;
  cout << "Nombre del jugador: " << player.getName() << endl;
  cout << "Salud del jugador: " << player.getHealth() << endl;

  cout << "\n----- Comienza la aventura -----\n" << endl;

  // Inicio del juego en la Sala de Inicio
  cout << room1.getName() << ": " << room1.getDescription() << endl;

  Movement
  movement1
  (true, false, false, false);
  movement1.move();

  // Segunda sala
  cout << room2.getName() << ": " << room2.getDescription() << endl;
  player.combat
  (enemy4);
  player.pickUpItem
  (armor);
  inventory.push_back
  (armor);

  // Mostrar inventario
  cout << "\n----- Inventario -----" << endl;
  for (const auto& item : inventory) {
    cout << "- " << item.getName() << endl;
  }

  Movement 
  movement2
  (false, true, true, false);
  movement2.move();

  // Tercera sala
  cout << room3.getName() << ": " << room3.getDescription() << endl;
  player.combat
  (enemy6);
  player.pickUpItem
  (key);
  inventory.push_back
  (key);
 

  // Cuarta sala
  cout << room4.getName() << ": " << room4.getDescription() << endl;
  player.pickUpItem
  (potion);
  player.pickUpItem
  (sword);
  inventory.push_back
  (potion);
  inventory.push_back
  (sword);

  // Mostrar inventario
  cout << "\n----- Inventario -----" << endl;
  for (const auto& item : inventory) {
    cout << "- " << item.getName() << endl;
  }

  // Quinta sala
  cout << room5.getName() << ": " << room5.getDescription() << endl;
  player.combat
  (enemy10);
  player.pickUpItem
  (dagger);
  inventory.push_back
  (dagger);

  // Mostrar inventario
  cout << "\n----- Inventario -----" << endl;
  for (const auto& item : inventory) {
    cout << "- " << item.getName() << endl;
  }

  Movement 
  movement3
  (false, false, true, false);
  movement3.move();

  // Sexta sala
  cout << room6.getName() << ": " << room6.getDescription() << endl;

  Movement
  movement4
  (true, true, false, false);
  movement4.move();

  // Séptima sala
  cout << room7.getName() << ": " << room7.getDescription() << endl;
  player.combat
  (enemy2);
  player.pickUpItem
  (bow);
  inventory.push_back
  (bow);

  // Mostrar inventario
  cout << "\n----- Inventario -----" << endl;
  for (const auto& item : inventory) {
    cout << "- " << item.getName() << endl;
  }

  // Octava sala
  cout << room8.getName() << ": " << room8.getDescription() << endl;
  player.consumePotion();
  player.pickUpItem
  (shield);
  inventory.push_back
  (shield);

  // Mostrar inventario
    cout << "\n----- Inventario -----" << endl;
  for (const auto& item : inventory) {
    cout << "- " << item.getName() << endl;
  }

  // Novena sala
  cout << room9.getName() << ": " << room9.getDescription() << endl;
  player.combat
  (enemy3);
  player.pickUpItem
  (bow);
  inventory.push_back
  (bow);

  Movement
  movement5
  (true, false, false, false);
  movement5.move();

  // Décima sala
  cout << room10.getName() << ": " << room10.getDescription() << endl;


  return 0;
}
