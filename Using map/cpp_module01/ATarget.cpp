#include "ATarget.hpp"


    ATarget::ATarget(){}
    ATarget::ATarget(const ATarget& other): type(other.type) {}
    ATarget& ATarget::operator=(const ATarget&other)
    {
    if (this != &other) 
    {
        this->type = other.type;
    }
    return *this; 
    }


    ATarget::ATarget(const std::string& t)
    {
        type = t;
    }
    ATarget::~ATarget()
    {    }
    const std::string& ATarget::getType(void) const
    {
        return type;
    }

void ATarget::getHitBySpell(const ASpell& s) const
{
    std::cout << type << " has been " << s.getEffects() << "!" << std::endl;
}