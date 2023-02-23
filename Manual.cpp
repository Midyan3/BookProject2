#include "Manual.hpp"
#include <regex>
/**
 * @brief Construct a new Manual:: Manual object
 * Default constructor.
  Default-initializes all private members. 
  Booleans are default-initialized to False
 * 
 */
Manual::Manual()
    :  url_(""), device_name_(""), has_website_(false), visual_aid_(false) { }


/**
 * @brief Construct a new Manual:: Manual object. initialize the private members
 * 
 * @param title 
 * @param author 
 * @param page_count 
 * @param device_name 
 * @param is_digital 
 * @param url 
 * @param visual_aid 
 */

Manual::Manual(const std::string title, const std::string author, int page_count, const std::string device_name,bool is_digital, const std::string url,bool visual_aid)
    : Book(title, author, page_count, is_digital)
{
    url_= url;
    device_name_ = device_name;
    visual_aid_ = visual_aid; 
    url_ = "";
    has_website_ = false;
    if(URLhelper(url)){
        url_ = url; 
        has_website_ = true;
    }
   
    
} 
/**
    @param  : a reference to a std::string representing the device
    @post   : sets the private member variable to the value of the parameter
**/

void Manual::setDevice(const std::string& device_name){
    device_name_ = device_name;
}
/**
  @return  : the visual aid flag
**/
bool Manual::hasVisualAid() const{
    return visual_aid_;
}
bool Manual::hasWebsite() const{
    return has_website_;
}

/**
    @return  : the url for the website
**/
std::string Manual::getWebsite() const{
    return url_;
}
/**
    @return  : the variable indicating the device the manual is for
**/
std::string Manual::getDevice() const{
    return device_name_;
}
/**
     @return  : has_website_ flag (a boolean) 
 */
bool Manual::setWebsite(const std::string& website_name){
    has_website_ = true;
    url_ = "Broken Link";
    if(URLhelper(website_name)) url_ = website_name;
    return has_website_;
}
/**
    @param  : a reference to boolean
    @post   : sets the private member variable indicating the presence
            of a visual aid to the value of the parameter
**/
void Manual::setVisualAid(const bool new_has_aids){
    visual_aid_ = new_has_aids;
}
bool Manual::URLhelper(const std::string& url){
    return std::regex_match(url, std::regex("https?://www\\.[a-zA-Z0-9-_~:/?#@!$&*+,;%=]+\\.[a-zA-Z0-9-_~:/?#@!$&*+,;%=]{2,}")); 
}