#ifndef CARD_TYPES_H
#define CARD_TYPES_H

#include <string>
#include <unordered_map>

struct CardTypes {
    static constexpr char STR_RANKS[] = "23456789TJQKA";
    static constexpr int INT_RANKS[13] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
    static constexpr int PRIMES[13] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
    static constexpr char INT_SUIT_TO_CHAR_SUIT[] = "xshxdxxxc";

    static const std::unordered_map<char, int> CHAR_RANK_TO_INT_RANK;
    static const std::unordered_map<char, int> CHAR_SUIT_TO_INT_SUIT;
};

#endif // CARD_TYPES_H