// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#ifndef DATA_CFD_H_
#define DATA_CFD_H_

#include "types.h"

typedef std::pair<Itemset, int> CFD;
typedef std::vector<CFD> CFDList;
bool isValid(const Itemset& lhs, int rhs);

#endif //DATA_CFD_H_