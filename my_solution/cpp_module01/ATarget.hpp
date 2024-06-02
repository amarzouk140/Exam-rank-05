#ifndef ATarget_HPP
#define ATarget_HPP


#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
    ATarget();
    ATarget(const ATarget& other);
    ATarget& operator=(const ATarget&other);
    std::string type;

    public:
    ATarget(const std::string& t);
    virtual ~ATarget();
    std::string const& getType(void) const;
    virtual ATarget* clone() = 0;
    void getHitBySpell(const ASpell& s) const;
};
#endif 