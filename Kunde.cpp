#include "Kunde.h"

using namespace Client;

Kunde::Kunde(string username) // username must be unique
{
  this->username = username;
}
Kunde::Kunde()
{

}
void Kunde::add_favourite(Car new_car)
{

  this->favourite_list.push_back(new_car);
  loadToFile();
}

bool Kunde::delete_favourite(int id)
{

  for (int i = 0; i < this->favourite_list.size(); i++)
  {
    if (this->favourite_list[i].get_Id()==id)
    {
      for (int j = i; j < this->favourite_list.size() - 1; j++)
      {
        this->favourite_list[j] = this->favourite_list[j + 1];
      }
      this->favourite_list.pop_back();
      return true;
    }
  }

  //the second method:
  // vector<int>::iterator it;
  // it = remove_if(favourite_list.begin(), favourite_list.end(), checker(new_car));
  this->favourite_list.pop_back();
  loadToFile();

  return true;
}

vector<Car> Kunde::show_all()
{
  return this->favourite_list;
}

string Kunde::get_name()
{
  return username;
}

void Kunde::loadToFile()
{
  string name = username + ".txt";
  ofstream clientFile(name, ofstream::trunc); //create and open client file

  for (auto elem : favourite_list)
  { //write(trunchiate) to file
    clientFile << elem.get_Model() << ",";
    clientFile << elem.get_Brand() << ",";
    clientFile << elem.get_Year() << ",";
    clientFile << elem.get_Kilometers() << ",";
    clientFile << elem.get_Price() << ",";
    clientFile << elem.get_Power() << ",";
    clientFile << elem.get_Fuel() << ",";
  }
  clientFile << endl;
  clientFile.close(); //close file
}
