#ifndef NOVEL_HPP_
#define NOVEL_HPP_

#include "Book.hpp"
#include <iostream>
#include <string>
#include <vector>

 struct review {
        double score_;
        std::string rating_;
 }; 

class Novel: public Book {
public:
/**
  Default constructor.
  Default-initializes all private members.
*/

    Novel();
/**
  Parameterized constructor.
  @param     : The title of the book (a string)
  @param     : The author of the book (a string)
  @param     : The number of pages in the book (a positive integer)
  @param     : The genre of the novel (a string)
  @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
  @param     : A flag indicating whether there is a film adaptation
                for this novel with DEFAULT VALUE False (a Boolean)
*/
    Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital = false ,bool has_film = false);
   /**
    * @brief Set the Genre object
    * 
    * @param new_genre 
    * @return * void 
    */
   
    void setGenre(const std::string& new_genre);
    /**
     * @brief Get the Genre object
     * 
     * @return std::string 
     */
    std::string getGenre() const;
    /**
     * @brief Get the Character List object
     * 
     * @return std::vector<std::string> 
     */
    std::vector<std::string> getCharacterList() const;
    /**
     * @brief Get the Character List String object
     * 
     * @return std::string 
     */
    std::string getCharacterListString();
    /**
     * @brief adds a character from parameter to vector 
     * 
     * @param character 
     */
    void addCharacter(const std::string character);
    /**
     * @brief returns has_film_adapation onject
     * 
     * @return true 
     * @return false 
     */
    bool hasFilmAdaptation() const;
    /**
     * @brief Set the Film Adaptation object
     * 
     */
    void setFilmAdaptation();
    /**
     * @brief Create a Review object
     * 
     * @param score 
     * @param rating 
     * @return review 
     */
    review createReview(const double score, const std::string& rating);
    /**
     * @brief Get the Average Rating object
     * 
     * @return double 
     */

    double getAverageRating() const;
    /**
     * @brief 
     * 
     * @param new_review 
     */
    void addReview(const review& new_review);
    /**
     * @brief calculates the average and updates the average varabile
     * 
     */
    void calculateAverageRating();


private:
/**
 *   - a string indicating the genre of the novel
  - a vector of strings storing the characters
    in the novel (a character list)
  - a vector of reviews (type review defined in the above struct)
    storing the reviews for this novel
  - a floating point number (double) storing the average rating
  - a boolean indicating whether a film adaptation for this
    novel exists
 * 
 */
    std::string genre_;
    std::vector<std::string> character_list_;
    std::vector<review> review_list_;
    double average_rating_;
    bool has_film_adaptation_; 
};

#endif

