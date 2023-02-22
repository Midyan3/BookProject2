#include "Novel.hpp"

Novel::Novel(std::string title, std::string author, int page_count, std::string genre, bool is_digital, bool has_film):Book(title, author, page_count, is_digital), genre_(genre), has_film_(has_film)
{}
Novel::Novel():Book("","",0,false), genre_(""), has_film_(false)
{}

double Novel::getAverageRating(){
    return averagerating_;
}

void Novel::calculateAverageRating(){
    double total = 0;
    double number_of_people = 0;
   for( int i = 0; i <= review_list_.size() - 1; i++){
        total += review_list_[i].score;
        number_of_people++;
   }
    averagerating_ = total/number_of_people;
}
review Novel::createReview(const double review_score, const std::string&  review_sum){
    review new_review;
    new_review.score = review_score;
    new_review.rating = review_sum;
    review_list_.push_back(new_review); 
    return new_review;
}   
void Novel::addReview(review& new_review){
    review_list_.push_back(new_review);
}
void Novel::addCharacter(std::string character){
    character_list_.push_back(character);
    std::cout<<character_list_[0]<<std::endl;
}

bool Novel::hasFilmAdaptation(){
    return has_film_;
}
void Novel::setFilmAdaptation(){
    has_film_=true;
}
std::string Novel::getCharacterListString(){
    std::string character_list;
    for(const auto& character : character_list_){
        character_list += character + " "; 
    }    
    return character_list;
}
std::vector<std::string> Novel::getCharacterList(){
    return character_list_;
}

void Novel::setGenre(const std::string& new_genre){
    genre_ = new_genre;
}

std::string Novel::getGenre(){return genre_;}
