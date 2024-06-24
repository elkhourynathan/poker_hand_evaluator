#include "Card.h"
#include <iostream>

int main() {
    // Example usage:
    std::string card_str = "As";
    int card_int = Card::new_card(card_str);
    std::cout << "Card: " << card_str << " -> " << card_int << std::endl;

    std::vector<std::string> hand = {"As", "Kd", "Qh", "Jc", "Ts"};
    std::vector<int> binary_hand = Card::hand_to_binary(hand);
    std::cout << "Binary Hand: ";
    for (int c : binary_hand) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    Card::print_cards(binary_hand);

    return 0;
}
