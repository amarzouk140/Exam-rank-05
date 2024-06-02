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
    std::map <std::string, ASpell*> spellB;

    public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell*);
    void forgetSpell(std::string const &name);
    ASpell* createSpell(std::string const &name);

};
#endif 