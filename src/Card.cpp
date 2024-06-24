#include "Card.h"
#include "CardTypes.h"
#include <bitset>
#include <algorithm>
#include <iostream>

int Card::new_card(const std::string& card_str){
    char rank_char = card_str[0];
    char suit_char = card_str[1];
    int rank_int = CardTypes::CHAR_RANK_TO_INT_RANK.at(rank_char);
    int suit_int = CardTypes::CHAR_SUIT_TO_INT_SUIT.at(suit_char);
    int rank_prime = CardTypes::PRIMES[rank_int];

    int bitrank = 1 << rank_int << 16;
    int suit = suit_int << 12;
    int rank = rank_int << 8;

    return bitrank | suit | rank | rank_prime;
}

std::string Card::int_to_str(int card_int){
    int rank_int = get_rank_int(card_int);
    int suit_rank = get_suit_int(card_int);
    return std::string(1, CardTypes::STR_RANKS[rank_int]) + CardTypes::INT_SUIT_TO_CHAR_SUIT[suit_rank];
}

int Card::get_rank_int(int card_int){
    return (card_int >> 8) & 0xF;
}

int Card::get_suit_int(int card_int){
    return (card_int >> 12) & 0xF;
}

int Card::get_bitrank_int(int card_int){
    return (card_int >> 16) & 0x1FFF;
}

int Card::get_prime(int card_int){
    return card_int & 0x3F;
}

std::vector<int> Card::hand_to_binary(const std::vector<std::string>& card_strs){
    std::vector<int> binary_hand;
    for(const auto& c : card_strs){
        binary_hand.push_back(new_card(c));
    }
    return binary_hand;
}

int Card::prime_product_from_hand(const std::vector<int>& card_ints){
    int product = 1;
    for(const auto& c : card_ints){
        product *= (c & 0xFF);
    }
    return product;
}

int Card::prime_product_from_rankbits(int rankbits){
    int product = 1;
    for(int i = 0; i < 13; i++){
        if((rankbits & (1 << i))){
            product *= CardTypes::PRIMES[i];
        }
    }
    return product;
}

std::string Card::int_to_binary(int card_int){
    std::bitset<32> b(card_int);
    std::string binary_string = b.to_string();
    std::reverse(binary_string.begin(), binary_string.end());

    std::string output;

    for(size_t i = 0; i< binary_string.size(); i++){
        if (i > 0 && i % 4 == 0){
            output += '\t';
        }
        output += binary_string[i];
    }

    return output;
}

std::string Card::ints_to_str(const std::vector<int>& card_ints) {
    std::string output;
    for (size_t i = 0; i < card_ints.size(); ++i) {
        output += int_to_str(card_ints[i]);
        if (i != card_ints.size() - 1) {
            output += ",";
        }
    }
    return output;
}

void Card::print_cards(const std::vector<int>& card_ints) {
    std::cout << ints_to_str(card_ints) << std::endl;
}

