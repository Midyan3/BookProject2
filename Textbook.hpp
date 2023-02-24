#ifndef TEXTBOOK_HPP_
#define TEXTBOOK_HPP_
#include <iostream>
#include <string>
#include "Book.hpp"


enum grade_level{NONE, ELEMENTARY, JUNIOR_HIGH , HIGH_SCHOOL , COLLEGE };  

class Textbook:public Book{
public:
/**
  Default constructor.
  Default-initializes all private members. 
  Booleans are default-initialized to False
*/
Textbook();
  /**
    Parameterized constructor.
    @param     : The title of the book (a string)
    @param     : The author of the book (a string)
    @param     : The number of pages in the book (a positive integer)
    @param     : A flag indicating whether the book is in digital form 
                 with DEFAULT VALUE False (a Boolean)
    @param     : The name of the device (a string)
    @param     : The URL that is in the format 
                 'https://www.something.something' 
                 or 'http://www.something.something' 
                 with the last 'something' being at least 2 characters 
                 with DEFAULT VALUE empty string (a string)
    @param     : A Boolean indicating the presence of a visual aid 
                 with DEFAULT VALUE False
    @post      : The private members are set to the values of the 
                 corresponding parameters. 
                 If a URL is provided, the website flag is set to True.
                 If the URL is ill-formatted, the website is set to 
                 empty string and the website flag is set to False.
    */
Textbook( std::string title, std::string author, int page_count,std::string subject, bool digital = false , grade_level new_grade_level = NONE, bool review_question = false);
/**
 * @brief Set the Subject object
 * 
 * @param subject 
 */
void setSubject(const std::string& subject);
/**
 * @brief Get the Subject object
 * 
 * @return std::string 
 */
std::string getSubject() const;
/**
 * @brief Set the Grade Level object
 * 
 * @param new_grade_level 
 */
void setGradeLevel(const grade_level& new_grade_level);
/**
 * @brief Set the Review Questions object
 * 
 */
void setReviewQuestions();
/**
 * @brief Get the Grade Level object
 * 
 * @return std::string 
 */
std::string getGradeLevel() const;
/**
 * @brief Checks mad 
 * 
 * @return true 
 * @return false 
 */
bool checkReviewQuestions() const;


private:
/**
 *    - a string the represents the subject of the book
   - variable of type grade_level that represents the grade level of the book
   - a boolean that indicates whether the book has review questions or not
 
 * 
 */
std::string subject_;
bool review_question_;
grade_level grade_level_;

};
#endif