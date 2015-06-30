#pragma once

#ifndef DOGE_UTILITY
#define DOGE_UTILITY

#include <string>
#include <iostream>
#include <fstream>
#include <string.h>
#include <algorithm>

//using namespace std;


std::string toString(int number);
void readIntFromFile(char* file_path, int* output);
void readStringFromFile(char* file_path, char* output);
void writeIntToFile(char* file_path, int number);
void writeStringToFile(char* file_path, char* str);
std::string dogeDeposit(std::string character);
std::string dogeBalance(std::string character);
std::string dogeWithdraw(std::string character, int amount, std::string address);
std::string dogeTip(std::string character, int amount, std::string character_to);



#endif
