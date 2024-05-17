#include <iostream>
#include <string>

// Interface
class Printable {
public:
  virtual std::string GetClassName() = 0; //Pure Virtual
  virtual ~Printable() = default;
  // ~ Destructor
};

class Entity : public Printable {
public:
  // virtual std::string GetName() { return "Entity"; }
  virtual std::string GetName() { return "Entity"; } //PURE VIRTUAL FUNCTION | Has to be implemented in a subclass
  std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity {
private:
  std::string m_Name;

public:
  Player(const std::string& name)
    : m_Name(name) {
  }

  std::string GetName() override { return m_Name; }
  std::string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity) {
  std::cout << entity->GetName() << std::endl;
}

class A : public Printable {
public:
  std::string GetClassName() override { return "A"; }
};

void Print(Printable* obj) {
  std::cout << obj->GetClassName() << std::endl;
}

void VirtualFunctions() {
  Entity* e = new Entity();
  // PrintName(e);

  Player* p = new Player("Cherno");
  // PrintName(p);

  Print(e);
  Print(p);
  Print(new A()); //TODO:Memory leak?

  // Entity* entity = p;
  // std::cout << entity->GetName();
}
