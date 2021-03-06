#ifndef DOG_HPP
#define DOG_HPP

#include "utils.hpp"

class Dog : public Animal
{
    public:
        Dog();
        virtual ~Dog();
        std::string sleeping() override;
};

#endif // DOG_HPP
