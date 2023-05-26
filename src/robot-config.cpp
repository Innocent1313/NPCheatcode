#include "vex.h"

using namespace  vex;

using signature = vision::signature;
using code = vision::code;

//A global i nstance of brain used for printing to the V5 Brain screen
brain Brain;

//VEXcode device constructors
motor fleft = motor(PORT1, ratio18_1, false);
motor bleft = motor(PORT2, ratio18_1, false);
motor mleft = motor(PORT3, ratio18_1, false);
motor fright = motor(PORT4, ratio18_1, false);
motor mright = motor(PORT5, ratio18_1, false);
motor bright = motor(PORT6, ratio18_1, false);
controller troll = controller(primary);