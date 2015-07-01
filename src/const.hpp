#ifndef CONST_H
#define CONST_H

#include <string>

using namespace std;

const int WORD_SIZE = 8;
const int ADDR_SIZE = 4;
const int RAM_SIZE = 15;

// Miliseconds between cycles (when run in interactive mode).
const int FQ = 333;

const string SAVE_FILE_NAME = "saved-ram-";

#endif
