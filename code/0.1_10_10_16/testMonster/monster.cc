#include "monster.h"
using namespace std;

void initMonster(Monster & m)
{
    m.typeMonster=STANDARD;
    switch(m.typeMonster){
            case STANDARD:
        m.rectMonster.x=0;
        m.rectMonster.y=140;
        m.rectMonster.w=65;
        m.rectMonster.h=60;
        break;
            case DORMEUR:
        m.rectMonster.x=0;
        m.rectMonster.y=0;
        m.rectMonster.w=75;
        m.rectMonster.h=65;
        break;

}
}

