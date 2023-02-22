#ifndef MANUAL_HPP_
#define MANUAL_HPP_
#include "Book.hpp"
#include <string>
#include <regex>

class Manual: public Book{
public:
    Manual();
    Manual(const std::string title, const std::string author, int page_count, const std::string device_name,bool is_digital = false, const std::string url = "",bool visual_aid = false);
    void setDevice(const std::string& device_name);
    std::string getDevice() const;
    bool setWebsite(const std::string& website_name);
    void setVisualAid(bool new_has_aids);
    std::string getWebsite() const;
    bool hasVisualAid() const;
    bool hasWebsite() const;
    bool URLhelper(const std::string& url);

private:
    std::string url_; 
    std::string device_name_;
    bool has_website_;
    bool visual_aid_;
    
}; 
#endif 
