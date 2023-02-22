#include "Manual.hpp"
#include <regex>

Manual::Manual()
    :  url_(""), device_name_(""), has_website_(false), visual_aid_(false) { }

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

void Manual::setDevice(const std::string& device_name){
    device_name_ = device_name;
}
bool Manual::hasVisualAid() const{
    return visual_aid_;
}
bool Manual::hasWebsite() const{
    return has_website_;
}
std::string Manual::getWebsite() const{
    return url_;
}
std::string Manual::getDevice() const{
    return device_name_;
}
bool Manual::setWebsite(const std::string& website_name){
    has_website_ = true;
    url_ = "Broken Link";
    if(URLhelper(website_name)) url_ = website_name;
    return has_website_;
}
void Manual::setVisualAid(bool new_has_aids){
    visual_aid_ = new_has_aids;
}
bool Manual::URLhelper(const std::string& url){
    return std::regex_match(url, std::regex("https?://www\\.[a-zA-Z0-9-_~:/?#@!$&*+,;%=]+\\.[a-zA-Z0-9-_~:/?#@!$&*+,;%=]{2,}")); 
}