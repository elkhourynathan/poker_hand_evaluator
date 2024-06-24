#ifndef CARD_TYPES_H
#define CARD_TYPES_H

#include <string>
#include <unordered_map>

namespace CardTypes {
    constexpr char STR_RANKS[] = "23456789TJQKA";
    constexpr int INT_RANKS[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    constexpr int PRIMES[13] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
    constexpr char INT_SUIT_TO_CHAR_SUIT[] = "xshxdxxxc";

    // LookupTable constants
    constexpr int MAX_ROYAL_FLUSH = 1;
    constexpr int MAX_STRAIGHT_FLUSH = 10;
    constexpr int MAX_FOUR_OF_A_KIND = 166;
    constexpr int MAX_FULL_HOUSE = 322;
    constexpr int MAX_FLUSH = 1599;
    constexpr int MAX_STRAIGHT = 1609;
    constexpr int MAX_THREE_OF_A_KIND = 2467;
    constexpr int MAX_TWO_PAIR = 3325;
    constexpr int MAX_PAIR = 6185;
    constexpr int MAX_HIGH_CARD = 7462;

    const std::unordered_map<char, int> CHAR_RANK_TO_INT_RANK = {
        {'2', 0}, {'3', 1}, {'4', 2}, {'5', 3}, {'6', 4}, {'7', 5},
        {'8', 6}, {'9', 7}, {'T', 8}, {'J', 9}, {'Q', 10}, {'K', 11}, {'A', 12}
    };

    const std::unordered_map<char, int> CHAR_SUIT_TO_INT_SUIT = {
        {'s', 1}, {'h', 2}, {'d', 4}, {'c', 8}
    };

    const std::unordered_map<int, int> MAX_TO_RANK_CLASS = {
        {MAX_ROYAL_FLUSH, 0},
        {MAX_STRAIGHT_FLUSH, 1},
        {MAX_FOUR_OF_A_KIND, 2},
        {MAX_FULL_HOUSE, 3},
        {MAX_FLUSH, 4},
        {MAX_STRAIGHT, 5},
        {MAX_THREE_OF_A_KIND, 6},
        {MAX_TWO_PAIR, 7},
        {MAX_PAIR, 8},
        {MAX_HIGH_CARD, 9}
    };

    const std::unordered_map<int, std::string> RANK_CLASS_TO_STRING = {
        {0, "Royal Flush"},
        {1, "Straight Flush"},
        {2, "Four of a Kind"},
        {3, "Full House"},
        {4, "Flush"},
        {5, "Straight"},
        {6, "Three of a Kind"},
        {7, "Two Pair"},
        {8, "Pair"},
        {9, "High Card"}
    };
}

#endif // CARD_TYPES_H
