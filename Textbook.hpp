#ifndef TEXTBOOK_HPP_
#define TEXTBOOK_HPP_
#include <iostream>
#include <string>
#include "Book.hpp"


enum grade_level{NONE = 0, ELEMENTARY = 1, JUNIOR_HIGH = 2, HIGH_SCHOOL = 3, COLLEGE = 4};  

class Textbook:public Book{
public:
Textbook();
Textbook(const std::string& title, const std::string& author, int page_count, const std::string& subject, bool digital = false ,const grade_level grade_level = NONE, bool review_question = false);
void setSubject(const std::string& subject);
std::string getSubject();
void setGradeLevel(grade_level grade_level);
void setReviewQuestions();
std::string getGradeLevel();
bool checkReviewQuestions();
std::string convert[5] = {"NONE", "ELEMENTARY", "JUNIOR HIGH", "HIGH SCHOOL", "COLLEGE"};

private:
std::string subject_;
bool review_question_;
grade_level grade_level_;

};
#endif