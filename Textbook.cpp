#include "Textbook.hpp"

/**
 * @brief Construct a new Textbook:: Textbook object
 * 
 */
Textbook::Textbook(): subject_(""), review_question_(false), grade_level_(NONE)
{}
/**
 * @brief Construct a new Textbook:: Textbook object with parameter
 * 
 * @param title 
 * @param author 
 * @param page_count 
 * @param subject 
 * @param digital 
 * @param new_grade_level 
 * @param review_question 
 */
Textbook::Textbook(std::string title,  std::string author, int page_count, std::string subject, bool digital, grade_level new_grade_level , bool review_question):Book(title, author, page_count, digital)
{ 
    subject_ = subject;
    review_question_ = review_question;
    grade_level_ = new_grade_level;
}
/**
 * @brief Sets gradelevel to parameter
 * 
 * @param new_grade_level 
 */
void Textbook::setGradeLevel(const grade_level& new_grade_level){
    grade_level_ = new_grade_level;
}
/**
 * @brief Sets review_question_ object to true
 * 
 */
void Textbook::setReviewQuestions(){
    review_question_ = true;
}
/**
 * @brief Sets subject object to paramete
 * 
 * @param subject 
 */
void Textbook::setSubject(const std::string& subject){
    subject_ = subject;
}
/**
 * @brief Checks if Revie_question_ is set to true or false
 * 
 * @return true 
 * @return false 
 */
bool Textbook::checkReviewQuestions() const{
    return review_question_;
}
/**
 * @brief Returns object subject_
 * 
 * @return std::string 
 */
std::string Textbook::getSubject() const{
    return subject_;
}
/**
 * @brief Returns the grade level 
 * 
 * @return std::string 
 */
std::string Textbook::getGradeLevel() const{
    std::string grade = "";
    if(grade_level_ == NONE){
        grade = "NONE";
    }else if(grade_level_ == ELEMENTARY){
        grade = "ELEMENTARY";
    }else if(grade_level_ == JUNIOR_HIGH){
        grade = "JUNIOR HIGH";
    }else if(grade_level_ == HIGH_SCHOOL){
        grade = "HIGH SCHOOL";
    }else if(grade_level_ == COLLEGE){
        grade = "COLLEGE";
    }
    return grade;
}


