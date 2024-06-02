#ifndef ASpell_HPP
#define ASpell_HPP


#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
    ASpell();
    ASpell(const ASpell& other);
    ASpell& operator=(const ASpell&other);
    std::string name;
    std::string effects;

    public:
    ASpell(const std::string& n, const std::string& t);
    virtual ~ASpell();
    std::string const& getName(void) const;
    std::string const& getEffects(void) const;
    virtual ASpell* clone() = 0;

    void lanuch (const ATarget& t) const;
};
#endif 