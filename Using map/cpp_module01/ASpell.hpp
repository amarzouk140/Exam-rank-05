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
    std::string name;
    std::string effects;

    public:
    ASpell();
    ASpell(const ASpell& other);
    ASpell& operator=(const ASpell&other);
    ASpell(const std::string& n, const std::string& t);
    virtual ~ASpell();

    const std::string& getName(void) const;
    const std::string& getEffects(void) const;
    virtual ASpell* clone() const = 0;

    void launch (const ATarget& t) const;
};
#endif 
