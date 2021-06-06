#include "Persistence.h"
#include <iostream>
#include <fstream>
using namespace Repository;

CarRepo::CarRepo()
{
  this->list = {};
}

// void CarRepo::add(const Car &car)
// {

//   this->list.push_back(car);
// }

Car CarRepo ::save(Car entity)
{
  //checking to see if the element already exists
  for (auto elem : list)
    if (elem.get_Id() == entity.get_Id())
      return NULL_CAR;

  list.push_back(entity);
  return entity;
}

// bool CarRepo::remove(const Car &car)
// {
//   for (int i = 0 ; i < list.size(); i++)
//     if (list[i].checker(car)){
//       list.erase(list.begin() + i);
//       return true;
//     }

//   return false;
// }
/*
Car CarRepo::del(int id)
{
  for (int i = 0; i < list.size(); i++)
    if (list[i].get_Id() == id)
    {
      auto elem = list[i];
      list.erase(list.begin() + i);
      return elem;
    }

  return NULL_CAR;
}
*/
Car CarRepo::del(int id)
{
    for(int i=0;i<list.size();i++)
    {
        if(list[i].get_Id()==id)
        {
            for(int j=i;j<list.size()-1;j++)
            {
                list[j]=list[j+1];
            }
        }
    }
    list.pop_back();
    return NULL_CAR;
}
Car CarRepo::findOne(int id)
{

  for (int i = 0; i < this->list.size(); i++)
  {
    if (this->list[i].get_Id() == id)
      return list[i];
  }
  //Throw RepoError("Masina nu exista");
  return NULL_CAR;
}

void CarRepo::update_Kilometers(int id, int _kilometers)
{

  if (findOne(id) == NULL_CAR)
    throw exception();

  for (int i = 0; i < this->list.size(); i++)
  {
    //if findOne(id) == NULL_Car Throw RepoError("Masina nu exista");
    if (this->list[i].checker(findOne(id)))
    {
      this->list[i].set_Kilometers(_kilometers);
    }
  }
}

void CarRepo::update_Price(int id, int _price)
{

  if (findOne(id) == NULL_CAR)
    throw exception();

  for (int i = 0; i < this->list.size(); i++)
  {
    if (this->list[i].checker(findOne(id)))
      this->list[i].set_Price(_price);
  }
}

vector<Car> CarRepo::findAll()
{
  return this->list;
}

int CarRepo::size()
{
  return list.size();
}

void CarRepo::saveFromFile()
{
  ifstream inFile;
  string model; //the same as in Domain.h private attributes
  string brand;
  string fuel;
  int yearOfRegistration;
  int kilometers;
  int price;
  int power;

  inFile.open("C:/Qt/labor6oop/data_base.txt");
  if (inFile.is_open())
  {
    string line;
    while (getline(inFile, line))
    {
      stringstream ss(line);

      string model;
      string brand;
      string fuel;
      string yearOfRegistration;
      string kilometers;
      string price;
      string power;

      getline(ss, model, ',');
      getline(ss, brand, ',');
      getline(ss, yearOfRegistration, ',');
      getline(ss, kilometers, ',');
      getline(ss, price, ',');
      getline(ss, power, ',');
      getline(ss, fuel, ',');

      save(Car(model, brand, fuel, stoi(yearOfRegistration), stoi(kilometers), stoi(price), stoi(power)));
    }

    inFile.close();
  }
  else
    cout << "Error opening file";
}
