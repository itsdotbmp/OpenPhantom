/* use '#define DCSBIOS_DEFAULT_SERIAL' instead if your Arduino board
 *  does not feature an ATMega328 or ATMega2650 controller.
 */
#define DCSBIOS_IRQ_SERIAL
#define DCSBIOS_DISABLE_SERVO
#include "DcsBios.h"

/* F-4E switch functions*/
DcsBios::Switch2Pos pltAfcsAutopilot("PLT_AFCS_AUTOPILOT", A0);
DcsBios::Switch2Pos pltAfcsAltHold("PLT_AFCS_ALT_HOLD", A1);
DcsBios::Switch2Pos pltAfcsStabAugPitch("PLT_AFCS_STAB_AUG_PITCH", 8);
DcsBios::Switch2Pos pltAfcsStabAugRoll("PLT_AFCS_STAB_AUG_ROLL", 4);
DcsBios::Switch2Pos pltAfcsStabAugYaw("PLT_AFCS_STAB_AUG_YAW", 6);
//CMPT STEER A2

/* F-4E electromagnet functions */
DcsBios::LED pltAfcsAP(F_4E_PLT_AFCS_AUTOPILOT_AM, 10);
DcsBios::LED pltApAltHold(F_4E_PLT_AFCS_ALT_HOLD_AM, 11);
//CMPT STEER LED D9?

/* F-14 functions*/
DcsBios::Switch2Pos pltAutopltAlt("PLT_AUTOPLT_ALT", A1);
DcsBios::LED pltApEngage(F_14_PLT_AUTOPLT_ENGAGE_AM, 10);
DcsBios::LED pltApAlt(F_14_PLT_AUTOPLT_ALT_AM, 11);

/* A-4E-C functions */
DcsBios::Switch2Pos afcsAlt("AFCS_ALT", A1);
DcsBios::LED afcsAlti(A_4E_C_AFCS_ALT_AM, 11);
DcsBios::Switch2Pos afcsEngage("AFCS_ENGAGE", A0);
DcsBios::LED afcsEng(A_4E_C_AFCS_ENGAGE_AM, 10);

void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}
