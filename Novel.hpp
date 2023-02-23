#ifndef NOVEL_HPP_
#define NOVEL_HPP_

#include "Book.hpp"
#include <iostream>
#include <string>
#include <vector>

 struct review {
        double score;
        std::string rating;
 }; 

class Novel: public Book {
public:

    Novel();
    Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital = false ,bool has_film = false);
    
   
    void setGenre(const std::string& new_genre);

    std::string getGenre() const;

    std::vector<std::string> getCharacterList() const;

    std::string getCharacterListString();

    void addCharacter(std::string character);

    bool hasFilmAdaptation() const;

    void setFilmAdaptation();

    review createReview(const double review_score, const std::string& review_text);

    double getAverageRating() const;

    void addReview(const review& new_review);

    void calculateAverageRating();


private:
    std::string genre_;
    std::vector<std::string> character_list_;
    std::vector<review> review_list_;
    double averagerating_;
    bool has_film_; 
};

#endif

