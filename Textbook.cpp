#include "Textbook.hpp"

Textbook::Textbook():Book(), subject_(""), review_question_(false), grade_level_(NONE)
{}

Textbook::Textbook(const std::string& title, const std::string& author, int page_count, const std::string& subject, const grade_level grade_level, bool review_question , bool digital){
    Book(title, author, page_count, digital);
    subject_ = subject;
    review_question_ = review_question;
    grade_level_ = grade_level;
}
void Textbook::setGradeLevel(grade_level grade_level){
    grade_level_ = grade_level;
}
void Textbook::setReviewQuestions(){
    review_question_ = true;
}
void Textbook::setSubject(const std::string& subject){
    subject_ = subject;
}
bool Textbook::checkReviewQuestions(){
    return review_question_;
}
std::string Textbook::getSubject(){
    return subject_;
}
std::string Textbook::getGradeLevel(){
    std::string grade(convert[grade_level_]);
    return grade;
}

