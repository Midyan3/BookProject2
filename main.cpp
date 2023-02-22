#include<iostream>
//#include<cassert>
#include "Book.hpp"
#include "Novel.hpp"
#include "Textbook.hpp"

int main()
{

    // --------------Test 3 Class Novel------------------
    std::cout << "---------Starting Test 3 for Novel Class-----------" << std::endl;
    Novel novel;

    // Test setting and getting the genre
    std::string new_genre = "Drama";
    novel.setGenre(new_genre);
    std::cout << "Genre should be Drama: " << novel.getGenre() << std::endl;

    // Test adding a character
    std::string character_name = "Jay Gatsby";
    novel.addCharacter(character_name);
    novel.addCharacter(character_name);
    std::cout << "Character list should include Jay Gatsby: " << novel.getCharacterListString() << std::endl;

    // Test setting and getting film adaptation
    novel.setFilmAdaptation();
    std::cout << "Novel should have a film adaptation: " << novel.hasFilmAdaptation() << std::endl;

    // Test adding a review and getting the average rating
    review new_review = novel.createReview(4.5, "Excellent");
    novel.addReview(new_review);
    novel.calculateAverageRating();
    std::cout << "Average rating should be 4.5: " << novel.getAverageRating() << std::endl;

    // Test adding multiple reviews and getting the updated average rating
    review new_review_2 = novel.createReview(3.0, "Average");
    novel.addReview(new_review_2);
    novel.calculateAverageRating();
    std::cout << "Average rating should be 3.75: " << novel.getAverageRating() << std::endl;

    std::cout << novel.getTitle() << std::endl;

    std::cout << novel.getPageCount() << std::endl;

    

}