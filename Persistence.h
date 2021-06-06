#pragma once
#include "Domain.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include "CRUD_Repository.h"
using namespace std;
using namespace Domain;

#define NULL_CAR Car("","","",-1,-1,-1,-1)

namespace Repository
{
  class CarRepo : public CrudRepository<Car>
  {
  public:
    CarRepo();
    Car save(Car entity);
    Car del(int id);
    Car findOne(int id);
    void update_Kilometers(int id, int _kilometers);
    void update_Price(int id, int _price);
    int size();
    vector<Car> findAll();

    void saveFromFile();

  private:
    vector<Car> list;
  };
};
