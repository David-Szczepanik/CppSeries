#include <iostream>

class EntityC {
public:
  float X, Y;

  // Constructors
  EntityC() {
    X = 0.0f;
    Y = 0.0f;
    std::cout << "Created Entity!" << std::endl;
  }

  EntityC(float x, float y) {
    X = x;
    Y = y;
  }

  // Custom Constructor
  // void Init() {
  //   X = 0.0f;
  //   Y = 0.0f;
  // }

  ~EntityC() {
    std::cout << "Destroyed Entity!" << std::endl;
  }

  void Print() {
    std::cout << X << ", " << Y << std::endl;
  }
};

class Log {
public:
  Log() = delete;

  static void Write() {
  }
};

void Constructors() {
  // Log::Write();

  EntityC e1;
  // Entity e2(10.0, 5.0);
  // e.Init();
  e1.Print();
}
