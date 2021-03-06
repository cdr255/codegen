#ifndef _CODEGEN_HPP_
#define _CODEGEN_HPP_
#include <iostream>
#include <string>

class Field {
private:
  std::string name; 
  std::string value;
public: 
  Field(std::string, std::string);
  std::string output();
  
};

Field::Field(std::string n, std::string v)
{
  name = n;
  value = v;
}

std::string Field::output()
{
  return name + value;
}

#endif
