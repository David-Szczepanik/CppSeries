#include <iostream>

class EntityI {
public:
  float X{0.0f}, Y{0.0f};

  void Move(float xa, float ya) {
    X += xa;
    Y += ya;
  }
};

class Player : public EntityI {
public:
  const char* Name;

  void PrintName() {
    std::cout << Name << std::endl;
  }
};

void Inheritance() {
  std::cout << sizeof(EntityI) << std::endl;
  std::cout << sizeof(Player) << std::endl;

  Player player;
  player.Move(5, 5);
  player.X = 2;
}
