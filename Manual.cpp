#include "Manual.hpp"

Manual::Manual()
    : Book(), url_(""), device_name_("") { }

Manual::Manual(std::string title, std::string author, int page_count,std::string url,std::string device_name,bool visual_aid,bool is_digital, bool has_website)
    : Book(title, author, page_count, is_digital)
{
    url_= url;
    device_name_ = device_name;
    visual_aid_ = visual_aid;
    has_website_ = has_website;
} 

void Manual::setDevice(const std::string& device_name){
    device_name_ = device_name;
}
bool Manual::hasVisualAid(){
    return visual_aid_;
}
bool Manual::hasWebsite(){
    return has_website_;
}
std::string Manual::getWebsite() const{
    return url_;
}
std::string Manual::getDevice() const{
    return device_name_;
}
void Manual::setWebsite(const std::string& website_name){
    url_ = website_name;
}
void Manual::setVisualAid(bool new_has_aids){
    visual_aid_ = new_has_aids;
}