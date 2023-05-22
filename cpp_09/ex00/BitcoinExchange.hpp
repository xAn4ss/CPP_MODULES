#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>


void get_in_file(std::ifstream& in);
void fill_data(std::ifstream &in, std::map<std::string, float> &data);
bool checkDate(std::string date, std::map<std::string, float> data);
bool checkValue(std::string value);
bool check_lower_value(std::string date, std::map<std::string, float> data);
#endif