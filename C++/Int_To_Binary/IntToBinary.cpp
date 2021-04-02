//
// Created by SHendryx on 4/1/21.
//

#include <string>
#include <iostream>
#include <bitset>
#include "IntToBinary.h"

std::string intToBinary(int num){
    return std::bitset<32>(num).to_string();
}