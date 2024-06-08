#include "ATarget.hpp"


    ATarget::ATarget(){}
    ATarget::ATarget(const ATarget& other){(void)other;}
    ATarget& ATarget::operator=(const ATarget&other){(void)other; return *this;}


    ATarget::ATarget(const std::string& t)
    {
        type = t;
    }
    ATarget::~ATarget()
    {    }
    std::string const& ATarget::getType(void) const
    {
        return type;
    }

void ATarget::getHitBySpell(const ASpell& s) const
{
    std::cout << type << " has been " << s.getEffects() << "!" << std::endl;
}