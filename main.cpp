#include "Manual.hpp"

int main(){
    Manual manual("helll0", "killer", 23, "ipad" );
    Manual socks("helll0", "killer", 23, "ipad", false,"http://www.something", true );
    std::cout<<manual.getWebsite()<<std::endl;
    std::cout<<socks.getWebsite();

    return 0;
}