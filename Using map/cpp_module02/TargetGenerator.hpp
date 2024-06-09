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
    std::map <std::string, ATarget*> targets;

    public:
    TargetGenerator();
    ~TargetGenerator();

   void learnTargetType(ATarget*);
    void forgetTargetType(const std::string& name);
    ATarget* createTarget(const std::string& name);

};
#endif 