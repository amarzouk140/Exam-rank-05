#include "Fwoosh.hpp"

    Fwoosh::Fwoosh()
    {
        name = "Fwoosh";
        effects = "fwooshed";
    }
    Fwoosh::~Fwoosh(){}
    Fwoosh* Fwoosh::clone()
    {
        return new Fwoosh();
    }