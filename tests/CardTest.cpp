#define BOOST_TEST_MODULE CardTest
#include <boost/test/included/unit_test.hpp>
#include "Card.h"

// g++ -std=c++17 -o CardTest ../src/Card.cpp ../src/CardTypes.cpp CardTest.cpp -I../src -I/opt/homebrew/opt/boost/include -L/opt/homebrew/opt/boost/lib -lboost_unit_test_framework

BOOST_AUTO_TEST_CASE(new_card_test) {
    int card = Card::new_card("As");
    BOOST_CHECK_EQUAL(card, 268442665); 

    card = Card::new_card("Kd");
    BOOST_CHECK_EQUAL(card, 134236965); 
}

BOOST_AUTO_TEST_CASE(hand_to_binary_test) {
    std::vector<std::string> hand = {"As", "Kd", "Qh"};
    std::vector<int> binary_hand = Card::hand_to_binary(hand);
    BOOST_REQUIRE_EQUAL(binary_hand.size(), 3);
    BOOST_CHECK_EQUAL(binary_hand[0], 268442665); 
    BOOST_CHECK_EQUAL(binary_hand[1], 134236965);
    BOOST_CHECK_EQUAL(binary_hand[2], 67119647); 
}

BOOST_AUTO_TEST_CASE(int_to_binary_test) {
    std::string binary_str = Card::int_to_binary(static_cast<int>(0x8004002B)); 
    BOOST_CHECK_EQUAL(binary_str, "1101\t0100\t0000\t0000\t0010\t0000\t0000\t0001");
}

BOOST_AUTO_TEST_CASE(ints_to_str_test) {
    std::vector<int> hand = {static_cast<int>(268442665), static_cast<int>(268442665), static_cast<int>(134236965)}; 
    std::string hand_str = Card::ints_to_str(hand);
    BOOST_CHECK_EQUAL(hand_str, "As,As,Kd");
}
