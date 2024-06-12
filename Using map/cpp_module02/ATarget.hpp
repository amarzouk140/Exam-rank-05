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
    std::string type;

    public:
    ATarget();
    ATarget(const ATarget& other);
    ATarget& operator=(const ATarget&other);

    ATarget(const std::string& t);
    virtual ~ATarget();
    const std::string& getType(void) const;
    virtual ATarget* clone() const = 0;
    void getHitBySpell(const ASpell& s) const;
};
#endif 
