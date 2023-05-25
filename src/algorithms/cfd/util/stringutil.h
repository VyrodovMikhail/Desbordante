// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#ifndef UTIL_STRINGUTIL_H_
#define UTIL_STRINGUTIL_H_

#include <sstream>
#include <cstdarg>

std::string& ltrim(std::string &s);
std::string& rtrim(std::string &s);
std::string& trim(std::string &s);
std::string concat(int count, ...);
std::string concatCsv(int count, ...);

#endif //UTIL_STRINGUTIL_H_