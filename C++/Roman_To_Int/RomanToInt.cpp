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
        //If this is the last character in the string, just add it's value.
        if (pos == s.length() - 1){
            // We are testing for this specifically so we don't go out of bounds of the string.
            value += getRomanValue(s[pos]);
        }
        // If the next character is greater than the current character, subtract the value of the current character.
        else if (getRomanValue(s[pos + 1]) > getRomanValue(s[pos])){
            value -= getRomanValue(s[pos]);
        }
        // If the next character is less than or equal to the current character, add the value of the current character.
        else if (getRomanValue(s[pos + 1]) <= getRomanValue(s[pos])){
            value += getRomanValue(s[pos]);
        }
    }
    return value;
}