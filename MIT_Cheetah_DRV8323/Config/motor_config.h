#ifndef MOTOR_CONFIG_H
#define MOTOR_CONFIG_H

//#define R_PHASE 0.13f           //Ohms
//#define L_D 0.00002f            //Henries
//#define L_Q 0.00002f            //Henries
#define R_PHASE 0.17f           //Ohms
#define L_D 0.000057f            //Henries
#define L_Q 0.000057f 

#define KT .08f                 //N-m per peak phase amp, = WB*NPP*3/2
#define NPP 21                  //Number of pole pairs
#define GR 6.0f                 //Gear ratio
#define KT_OUT 0.45f            //KT*GR
#define WB 0.0025f              //Flux linkage, Webers.  
#define R_TH 1.25f              //Kelvin per watt
#define INV_M_TH 0.03125f       //Kelvin per joule



#endif
