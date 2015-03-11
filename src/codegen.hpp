#ifndef _CODEGEN_HPP_
#define _CODEGEN_HPP_
#include <iostream>
#include <string>

class Field {
private:
  std::string name; 
public: 
  Field(std::string);
  std::string output();
  
};

Field::Field(std::string n)
{
  name = n;
}

std::string Field::output()
{
  return name;
}

#endif
