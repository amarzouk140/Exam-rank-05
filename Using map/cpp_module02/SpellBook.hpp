#ifndef SpellBook_HPP
#define SpellBook_HPP


#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;
class ATarget;

class SpellBook
{
    private:
    SpellBook(const SpellBook& other);
    SpellBook& operator=(const SpellBook&other);
    std::map <std::string, ASpell*> spells;

    public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(const std::string& name);
    ASpell* createSpell(const std::string&name);

};
#endif 