#include <iostream>

class Mammal {

public:
  Mammal() {}
  virtual void print() { std::cout << "I (" << this << ")'m a mammal!" << std::endl;}
};

class Human :public Mammal {

public:
  Human() {}
  void print() { std::cout << "I (" << this << ")'m a human!" << std::endl;}
};

int main() {

  Mammal m;
  Human h;
  Mammal& mr = h;
  mr.print();
  return 0;
}
