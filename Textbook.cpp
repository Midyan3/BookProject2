#include "Textbook.hpp"

Textbook::Textbook():Book("","", 0, false), subject_(""), review_question_(false), grade_level_(NONE)
{}

Textbook::Textbook(const std::string& title, const std::string& author, int page_count, const std::string& subject, bool digital, const grade_level grade_level , bool review_question){
    Book(title, author, page_count, digital);
    subject_ = subject;
    review_question_ = review_question;
    grade_level_ = grade_level;
}
void Textbook::setGradeLevel(const grade_level& grade_level){
    grade_level_ = grade_level;
}
void Textbook::setReviewQuestions(){
    review_question_ = true;
}
void Textbook::setSubject(const std::string& subject){
    subject_ = subject;
}
bool Textbook::checkReviewQuestions() const{
    return review_question_;
}
std::string Textbook::getSubject() const{
    return subject_;
}
std::string Textbook::getGradeLevel() const{
    int num = grade_level_;
    std::string grade(convert[num]);
    return grade;
}


