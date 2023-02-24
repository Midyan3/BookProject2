#ifndef MANUAL_HPP_
#define MANUAL_HPP_
#include "Book.hpp"
#include <string>
#include <regex>

class Manual: public Book{
public:
/**
    Default constructor.
    Default-initializes all private members.
*/
    Manual();
/**
  Parameterized constructor.
    @param     : The title of the book (a std::string)
    @param     : The author of the book (a std::string)
    @param     : The number of pages in the book (a positive integer)
    @param     : A flag indicating whether the book is in digital form
                with DEFAULT VALUE False (a Boolean)
    @param     : The name of the device (a std::string)
    @param     : The URL that is in the format
                'https://www.something.something'
                or 'http://www.something.something'
                with the last 'something' being at least 2 characters
                with DEFAULT VALUE empty std::string (a std::string)
    @param     : A Boolean indicating the presence of a visual aid
                with DEFAULT VALUE False
    @post      : The private members are set to the values of the
                corresponding parameters.
                If a URL is provided, the website flag is set to True.
                If the URL is ill-formatted, the website is set to
                empty std::string and the website flag is set to False.
*/
    Manual(const std::string title, const std::string author, int page_count, const std::string device_name,bool is_digital = false, const std::string url = "",bool visual_aid = false);
    /**
     * @brief Set the Device object
     * 
     * @param device_name : the name of the device thats being used
     */
    void setDevice(const std::string& device_name);
    /**
     * @brief Gets the name of Device object
     * 
     * @return std::string of the device object 
     */
    std::string getDevice() const;
    /**
     * @brief Set the Website object if the url matches the requirments else it sets string url to "Broken Link"
     * 
     * @param website_name: Url of website 
     * @return true 
     */
    bool setWebsite(const std::string& website_name);
    /**
     * @brief Set the Visual Aid object to either true or false depening on the param
     * 
     * @param new_has_aids 
     */
    void setVisualAid(const bool new_has_aids);
    /**
     * @brief Get the Website object
     * 
     * @return std::string 
     */
    std::string getWebsite() const;
    /**
     * @brief returns true if it the book has viusal aids or false if it doesn't
     * 
     * @return true or false 
     */
    bool hasVisualAid() const;
    /**
     * @brief Returns wether it contains a website or not
     * 
     * @return true or false
     */
    bool hasWebsite() const;
    /**
     * @brief Returns true if the website is formatted the right way orr false if it isn't
     * 
     * @param url 
     * @return true 
     * @return false 
     */
    bool URLhelper(const std::string& url);

private:
/**  - a string that represents a url
  - a string that represents the name of the device
  - a boolean indicating whether the Manual has a visual aid
  - a boolean indicating whether the Manual has a website
  */
    std::string url_; 
    std::string device_name_;
    bool has_website_;
    bool visual_aid_;
    
}; 
#endif 
