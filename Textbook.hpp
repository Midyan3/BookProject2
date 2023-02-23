#ifndef TEXTBOOK_HPP_
#define TEXTBOOK_HPP_
#include <iostream>
#include <string>
#include "Book.hpp"


enum grade_level{NONE, ELEMENTARY, JUNIOR_HIGH , HIGH_SCHOOL , COLLEGE };  

class Textbook:public Book{
public:
Textbook();
Textbook(const std::string& title, const std::string& author, int page_count, const std::string& subject, bool digital = false ,const grade_level new_grade_level = NONE, bool review_question = false);
void setSubject(const std::string& subject);
std::string getSubject() const;
void setGradeLevel(const grade_level& new_grade_level);
void setReviewQuestions();
std::string getGradeLevel() const;
bool checkReviewQuestions() const;


private:
std::string subject_;
bool review_question_;
grade_level grade_level_;

};
#endif