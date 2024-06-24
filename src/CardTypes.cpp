#include "CardTypes.h"

const std::unordered_map<char, int> CardTypes::CHAR_RANK_TO_INT_RANK = {
    {'2', 0},
    {'3', 1},
    {'4', 2},
    {'5', 3},
    {'6', 4},
    {'7', 5},
    {'8', 6},
    {'9', 7},
    {'T', 8},
    {'J', 9},
    {'Q', 10},
    {'K', 11},
    {'A', 12}
};

const std::unordered_map<char, int> CardTypes::CHAR_SUIT_TO_INT_SUIT = {
    {'s', 1},
    {'h', 2},
    {'d', 4},
    {'c', 8}
};