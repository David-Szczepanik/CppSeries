#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Player {
public :
  int x, y;
  int speed;

  void Move(int xa, int ya) {
    x += xa * speed;
    y += ya * speed;
  }
};

// void Move(Player& player, int xa, int ya) {
//   player.x += xa * player.speed;
//   player.y += ya * player.speed;
// }

void Classes() {
  Player player; //instance of Player object
  // player.x = 5;
  player.Move(1, -1);
}
