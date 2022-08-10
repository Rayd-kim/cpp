#include <iostream>
#include <string>

class Parent
{
  std::string name;

  public:
    Parent(std::string name): name(name) {
      std::cout << name << " Parent Constructor" << std::endl;
    }
    virtual ~Parent(){std::cout << name << " Parent Destructor" << std::endl;}
    virtual void  print(void){
      std::cout << "Parent " << name << std::endl;
    }
};

class Child : public Parent
{
  std::string name;
  
  public:
    Child(std::string name) : Parent(name), name(name){
      std::cout << name << " Child Constructor" << std::endl;
    }
    ~Child() {std::cout << name << " Child Destructor" << std::endl; }
    void  print(void){
      std::cout << "Child " << name << std::endl;
    }
};

int main(void)
{
  Parent  a("A");
  Child   *b = new Child("B");
  Parent  *c;

  c = b;

  a.print();
  b->print();
  c->print();

  delete c;
}
