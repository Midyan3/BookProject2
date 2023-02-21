#include "Textbook.hpp"

int main(){
    Textbook text;
    Textbook wext("hello", "heks", 203, "math");
    Textbook next("Hel", "low", 132,"english", false, COLLEGE );
    std::cout<<text.getGradeLevel()<<std::endl;
    std::cout<<wext.getGradeLevel()<<std::endl;
    std::cout<<next.getGradeLevel()<<std::endl;
    std::cout<<text.getSubject()<<std::endl;
    std::cout<<wext.getSubject()<<std::endl;
    std::cout<<next.getSubject()<<std::endl;
    return 0;
}