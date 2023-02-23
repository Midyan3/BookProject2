#include "Novel.hpp"

Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool has_film):Book(title, author, page_count, is_digital), genre_(genre), has_film_adaptation_(has_film), average_rating_(0.0)
{}
Novel::Novel(): genre_(""), has_film_adaptation_(false), average_rating_(0.0)
{}

double Novel::getAverageRating() const{
    return average_rating_;
}

void Novel::calculateAverageRating(){
    double total = 0.0;
   for( int i = 0; i < review_list_.size() ; i++){
        total += review_list_[i].score_;
   }
    average_rating_ = total/review_list_.size();
}
review Novel::createReview(const double score, const std::string&  rating){
    review new_review;
    new_review.score_ = score;
    new_review.rating_ = rating;
    return new_review;
}   
void Novel::addReview(const review& new_review){
    review_list_.push_back(new_review);
}
void Novel::addCharacter(const std::string character){
    character_list_.push_back(character);
}

bool Novel::hasFilmAdaptation() const{
    return has_film_adaptation_;
}
void Novel::setFilmAdaptation(){
    has_film_adaptation_=true;
}
std::string Novel::getCharacterListString(){
    std::string character_list = "";
     for(int i=0; i<character_list_.size(); i++){
        character_list += character_list_[i]; 
        character_list += " "; 
    }    
    return character_list.substr(0, character_list.size()-1);
}
std::vector<std::string> Novel::getCharacterList() const{
    return character_list_;
}

void Novel::setGenre(const std::string& new_genre){
    genre_ = new_genre;
}

std::string Novel::getGenre() const{
    return genre_;
}

