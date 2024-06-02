#include "Polymorph.hpp"

    Polymorph::Polymorph()
    {
        name = "Polymorph";
        effects = "turned into a critter";
    }
    Polymorph::~Polymorph(){}
    Polymorph* Polymorph::clone()
    {
        return new Polymorph();
    }