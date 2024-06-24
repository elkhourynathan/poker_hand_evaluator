#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

class Card{
    public:

    static int new_card(const std::string& card_string);
    static std::string int_to_str(int card_int);
    static int get_rank_int(int card_int);
    static int get_suit_int(int card_int);
    static int get_bitrank_int(int card_int);
    static int get_prime(int card_int);
    static std::vector<int> hand_to_binary(const std::vector<std::string>& card_strs);
    static int prime_product_from_hand(const std::vector<int>& card_ints);
    static int prime_product_from_rankbits(int rankbits);
    static std::string int_to_binary(int card_int);
    static std::string ints_to_str(const std::vector<int>& card_ints);
    static void print_cards(const std::vector<int>& card_ints);
};

#endif // CARD_H