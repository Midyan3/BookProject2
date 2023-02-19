#pragma once

#include "Book.hpp"
#include <string>

class Manual: public Book{
public:
    Manual();
    Manual(std::string title, std::string author, int page_count,std::string url,std::string device_name,bool visual_aid,bool is_digital = false, bool has_website = false);
    void setDevice(const std::string& device_name);
    std::string getDevice() const;
    void setWebsite(const std::string& website_name);
    void setVisualAid(bool new_has_aids);
    std::string getWebsite() const;
    bool hasVisualAid();
    bool hasWebsite();

private:
    std::string url_; 
    std::string device_name_;
    bool visual_aid_;
    bool has_website_;
}; 

