#include "TargetGenerator.hpp"


    TargetGenerator::TargetGenerator(){}
    TargetGenerator::TargetGenerator(const TargetGenerator& other){(void)other;}
    TargetGenerator& TargetGenerator::operator=(const TargetGenerator&other){(void)other; return *this;}
    TargetGenerator::~TargetGenerator(){}

    void TargetGenerator::learnTargetType(ATarget* s)
    {
        if (s)
        T[s->getType()] = s->clone();
    }
    void TargetGenerator::forgetTargetType(std::string const &name)
    {
        if (T.find(name) != T.end())
                T.erase(name);
    }
    ATarget* TargetGenerator::createTarget(std::string const &name)
    {
        ATarget *test = NULL;
        if (T.find(name) != T.end())
        test = T[name];
        return test;
    }
