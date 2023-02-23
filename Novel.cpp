#include "Novel.hpp"

Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool has_film):Book(title, author, page_count, is_digital), genre_(genre), has_film_(has_film), averagerating_(0.0)
{}
Novel::Novel():Book("","",0,false), genre_(""), has_film_(false), averagerating_(0.0)
{}

double Novel::getAverageRating() const{
    return averagerating_;
}

void Novel::calculateAverageRating(){
    double total = 0.0;
   for( int i = 0; i < review_list_.size() ; i++){
        total += review_list_[i].score;
   }
    averagerating_ = total/review_list_.size();
}
review Novel::createReview(const double review_score, const std::string&  review_sum){
    review new_review;
    new_review.score = review_score;
    new_review.rating = review_sum;
    return new_review;
}   
void Novel::addReview(const review& new_review){
    review_list_.push_back(new_review);
}
void Novel::addCharacter(std::string character){
    character_list_.push_back(character);
    std::cout<<character_list_[0]<<std::endl;
}

bool Novel::hasFilmAdaptation() const{
    return has_film_;
}
void Novel::setFilmAdaptation(){
    has_film_=true;
}
std::string Novel::getCharacterListString(){
    std::string character_list = "";
    for(const auto& character : character_list_){
        character_list += character + " "; 
    }    
    return character_list.substr(0, character_list.size()-1);
}
std::vector<std::string> Novel::getCharacterList() const{
    return character_list_;
}

void Novel::setGenre(const std::string& new_genre){
    genre_ = new_genre;
}

std::string Novel::getGenre() const{return genre_;}
