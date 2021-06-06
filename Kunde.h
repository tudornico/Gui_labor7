#pragma once
#include "Domain.h"
#include "vector"
#include <iostream>
#include <fstream>
using namespace Domain;
namespace Client
{

  class Kunde
  {

  private:
    vector<Car> favourite_list;
    string username;

  public:
    Kunde(string username);
    Kunde();

    void add_favourite(Car new_car);

    bool delete_favourite(int id);

    vector<Car> show_all();

    void loadToFile();

    string get_name();
  };
};
