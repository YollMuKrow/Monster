#include "monster.h"
using namespace std;

void initMonster(Monster & m)
{
  m.typeMonster=STANDARD;
  switch(m.typeMonster){
    case STANDARD:
      m.rectMonster.x=15;
      m.rectMonster.y=145;
      m.rectMonster.w=50;
      m.rectMonster.h=50;
      break;
    case DORMEUR:
      m.rectMonster.x=9.5;
      m.rectMonster.y=0;
      m.rectMonster.w=62.5;
      m.rectMonster.h=64.5;
      break;
    }
  m.x=3;//3;
  m.y=0;//6;
}

