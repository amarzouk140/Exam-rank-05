#include "Fireball.hpp"

    Fireball::Fireball()
    {
        name = "Fireball";
        effects = "burnt to a crisp";
    }
    Fireball::~Fireball(){}
    Fireball* Fireball::clone()
    {
        return new Fireball();
    }