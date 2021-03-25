//
// Created by samue on 3/19/2021.
//

#include <iostream>
#include "RomanToInt.h"
int getRomanValue(char c){
    if (c == 'I'){ return 1;}
    if (c == 'V'){ return 5;}
    if (c == 'X'){ return 10;}
    if (c == 'L'){ return 50;}
    if (c == 'C'){ return 100;}
    if (c == 'D'){ return 500;}
    if (c == 'M'){ return 1000;}
    return -1;
}

int romanToInt(std::string s){
    int value = 0;

    //Start at beginning of string
    int pos;
    //While not at end of string
    for (pos = 0; pos < s.length(); pos++){
        //std::cout << "Current Value: " << value << "\n";
        //If this is the last character in the string, just add it's value.
        if (pos == s.length() - 1){
            value += getRomanValue(s[pos]);
        } else
            //If next character is of lesser value, add current character value.
        if (getRomanValue(s[pos + 1]) < getRomanValue(s[pos])){
            value += getRomanValue(s[pos]);
        } else
            //In any other case, subtract current character value.
        if (s[pos + 1] > s[pos]){
            value -= getRomanValue(s[pos]);
        }
    }
    return value;
}