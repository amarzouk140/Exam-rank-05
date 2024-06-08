#include "TargetGenerator.hpp"


    TargetGenerator::TargetGenerator(){}
    TargetGenerator::TargetGenerator(const TargetGenerator& other){(void)other;}
    TargetGenerator& TargetGenerator::operator=(const TargetGenerator&other){(void)other; return *this;}
    
    TargetGenerator::~TargetGenerator()
    {
    for (std::map<std::string, ATarget*>::iterator it = targets.begin(); it != targets.end(); ++it) {
        delete it->second;
    }
    targets.clear();
    }

    void TargetGenerator::learnTargetType(ATarget* target)
    {
    if (target) 
    {
        if (targets.find(target->getType()) != targets.end()) 
        {
            delete targets[target->getType()];
        }
        targets[target->getType()] = target->clone();
    }
    }
    void TargetGenerator::forgetTargetType(std::string const &name)
    {
        std::map<std::string, ATarget*>::iterator it = targets.find(name);
    if (it != targets.end()) {
        delete it->second;
        targets.erase(it);
    }
    }
    ATarget* TargetGenerator::createTarget(std::string const &name) const
    {
        std::map<std::string, ATarget*>::const_iterator it = targets.find(name);
        if (it != targets.end()) 
        {
        return it->second->clone();
        }
    return NULL;
    }
