#include "Novel.hpp"
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
Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool has_film):Book(title, author, page_count, is_digital), genre_(genre), has_film_adaptation_(has_film), average_rating_(0.0)
{}
/**
  Default constructor.
  Default-initializes all private members.
*/
Novel::Novel(): genre_(""), has_film_adaptation_(false), average_rating_(0.0)
{}
/**
  @return   : the value of the average rating private member
**/
double Novel::getAverageRating() const{
    return average_rating_;
}
/**
  @post   : retrieves all scores from the reviews_ vector and
            computes the average to set value of the average_rating_
            private member
**/  
void Novel::calculateAverageRating(){
    double total = 0.0;
   for( int i = 0; i < review_list_.size() ; i++){
        total += review_list_[i].score_;
   }
    average_rating_ = total/review_list_.size();
}
/**
  @param    : a reference to floating point number (double) indicating
              the score of the  review
  @param    : a reference to string indicating the rating of the review
  @return   : creates and returns a review data type with
              score and rating as indicated by the parameters
*/

review Novel::createReview(const double score, const std::string&  rating){
    review new_review;
    new_review.score_ = score;
    new_review.rating_ = rating;
    return new_review;
}   
void Novel::addReview(const review& new_review){
    review_list_.push_back(new_review);
}
/**
  @param  : a reference to string indicating a character
  @post   : inserts the character into the character_list_ vector
**/
void Novel::addCharacter(const std::string character){
    character_list_.push_back(character);
}
/**
  @return   : the value of the film_adaptation_ private member
**/
bool Novel::hasFilmAdaptation() const{
    return has_film_adaptation_;
}
/**
  @post   : sets has_film_adaptation_ private member to true
**/
void Novel::setFilmAdaptation(){
    has_film_adaptation_=true;
}
/**
  @return    : a string of all the characters in the
              character_list_ private member, concatenated
              and separated by a space " " .
              For example: "character1 character2 character3"
**/
std::string Novel::getCharacterListString(){
    std::string character_list = "";
     for(int i=0; i<character_list_.size(); i++){
        character_list += character_list_[i]; 
        character_list += " "; 
    }    
    return character_list.substr(0, character_list.size()-1);
}

/**
  @return   : the vector containing the list of characters for this novel
**/
std::vector<std::string> Novel::getCharacterList() const{
    return character_list_;
}
/**
  @param  : a reference to string indicating the genre of the book
  @post   : sets genre_ private member to the
              value of the parameter
**/
void Novel::setGenre(const std::string& new_genre){
    genre_ = new_genre;
}
/**
  @return   : the value of the genre private member
**/
std::string Novel::getGenre() const{
    return genre_;
}

