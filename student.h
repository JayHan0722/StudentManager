#include <string>
#ifndef _STUDENT_H_
#define _STUDENT_H_

class student
{
        private:
                std::string First, Last;
        public:
                void setName(std::string firstname, std::string lastname);
                std::string fullName();
};


#endif
