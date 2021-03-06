/******************************************************************************
 * @file fingerprint
 * @brief driver example for a fingerprint sensor
 * @author MarieBidouille
 * @version 0.0.0
 ******************************************************************************/
#ifndef FINGERPRINT_H_
#define FINGERPRINT_H_

#include "luos.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Functions
 ******************************************************************************/
void Fingerprint_Init(void);
void Fingerprint_Loop(void);

#endif /* FINGERPRINT_H_ */