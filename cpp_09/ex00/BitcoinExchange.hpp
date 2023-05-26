#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <cstring>
#include <sstream>

void get_in_file(std::ifstream& in);
void fill_data(std::ifstream &in, std::map<std::string, float> &data);
bool checkDate(std::string date);
bool checkValue(std::string value);
void printData(std::map<std::string, float> data,std::string date,std::string value, std::stringstream &str);

#endif