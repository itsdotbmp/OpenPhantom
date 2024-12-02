/* use '#define DCSBIOS_DEFAULT_SERIAL' instead if your Arduino board
 *  does not feature an ATMega328 or ATMega2650 controller.
 */
//#define DCSBIOS_RS485_SLAVE 1   //Uncomment to enable RS485 slave
//#define TXENABLE_PIN 2          //Uncomment to enable RS485 slave
#define DCSBIOS_IRQ_SERIAL
#define DCSBIOS_DISABLE_SERVO
#include "DcsBios.h"

/* F-4E switch functions*/
DcsBios::Switch2Pos pltAfcsAutopilot("PLT_AFCS_AUTOPILOT", A0); //AFCS engage switch
DcsBios::Switch2Pos pltAfcsAltHold("PLT_AFCS_ALT_HOLD", A1);  //AFCS Alt hold switch
DcsBios::Switch2Pos pltAfcsStabAugPitch("PLT_AFCS_STAB_AUG_PITCH", 8);  //Stab aug pitch switch
DcsBios::Switch2Pos pltAfcsStabAugRoll("PLT_AFCS_STAB_AUG_ROLL", 4);  //Stab aug roll switch
DcsBios::Switch2Pos pltAfcsStabAugYaw("PLT_AFCS_STAB_AUG_YAW", 6);  //Stab aug yaw switch
//CMPT STEER A2 - to be added with DMAS

/* F-4E electromagnet functions */
DcsBios::LED pltAfcsAP(F_4E_PLT_AFCS_AUTOPILOT_AM, 10);  //LED function to trigger electromagnetically held AFCS switch
DcsBios::LED pltApAltHold(F_4E_PLT_AFCS_ALT_HOLD_AM, 11); //LED function to trigger electromagnetically held alt hold switch
//CMPT STEER LED D9? - to be added with DMAS

/* F-14 functions*/
DcsBios::Switch2Pos pltAutopltAlt("PLT_AUTOPLT_ALT", A1);  //Alt hold switch
//Waiting for 2Pos switch for AP engage
DcsBios::LED pltApEngage(F_14_PLT_AUTOPLT_ENGAGE_AM, 10); //LED function to trigger electromagnetically held AP engage switch
DcsBios::LED pltApAlt(F_14_PLT_AUTOPLT_ALT_AM, 11); //LED function to trigger electromagnetically held alt hold switch

/* A-4E-C functions */
DcsBios::Switch2Pos afcsAlt("AFCS_ALT", A1);  //AFCS Alt hold switch
DcsBios::LED afcsAlti(A_4E_C_AFCS_ALT_AM, 11);  //LED function to trigger electromagnetically held alt hold switch
DcsBios::Switch2Pos afcsEngage("AFCS_ENGAGE", A0);  //AFCS engage switch
DcsBios::LED afcsEng(A_4E_C_AFCS_ENGAGE_AM, 10);  //LED function to trigger electromagnetically held AFCS switch

void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}
