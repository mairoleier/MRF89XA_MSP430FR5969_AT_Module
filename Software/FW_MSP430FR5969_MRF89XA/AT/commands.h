#ifndef AT_COMMANDS_H_
#define AT_COMMANDS_H_

/***************************************************************************************************
 *	        Include section					                       		   					       *
 ***************************************************************************************************/
#include "cmd_definitions.h"

/***************************************************************************************************
 *	        Define section					                       		   					       *
 ***************************************************************************************************/
#define AT_CMD_MAX_PARTS	4

/***************************************************************************************************
 *	        Prototype section					                       							   *
 ***************************************************************************************************/
void 	Print_Error(uint8_t error_code);

void 	Send_Rf_Data(void);
void 	Receive_Rf_Data(void);

void 	Set_Rf_Mode(uint8_t rf_mode);
void 	Set_Rf_Local_Address(void);
void 	Set_Rf_Power(void);
void 	Set_Rf_Channel(void);

uint8_t Set_Network_Address(void);
uint8_t	Set_Rf_Data_Rate(void);

/***************************************************************************************************
 *	        Global Variable section  				                            				   *
 ***************************************************************************************************/
extern uint8_t radio_mode_receive;


#endif /* AT_COMMANDS_H_ */
