#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP


#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ASpell;
class ATarget;

class TargetGenerator
{
    private:
    TargetGenerator(const TargetGenerator& other);
    TargetGenerator& operator=(const TargetGenerator&other);
    std::map <std::string, ATarget*> T;

    public:
    TargetGenerator();
    ~TargetGenerator();

   void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &name);
    ATarget* createTarget(std::string const &name);

};
#endif 