/** @file
 * @brief This file contains the declaration of the class associated with the user-defined
 * application for the EtherCAT Arduino Shield by Esmacat slave example project */

#ifndef MY_APP_H
#define MY_APP_H

/*****************************************************************************************
 * INCLUDES
 ****************************************************************************************/
#include <iostream>
#include "application.h"
using std::cout;
//Include the header file for the Esmacat slave you plan to use for e.g. Analog Input slave
#include "ethercat_arduino_shield_by_esmacat.h"
#include "motordriver.h"

/*****************************************************************************************
 * CLASSES
 ****************************************************************************************/
/**
 * @brief Description of your custom application class
 *
 * Your custom application class my_app inherits the class 'esmacat_application'
 * Write functions to override the parent functions of 'esmacat_application'
 * Declare an object of your slave class (e.g. ecat_ai)
 * Declare any other variables you might want to add
 * Define the constructor for initialization
 */
class my_app : public esmacat_application
{
private:
    void assign_slave_sequence(); /** identify sequence of slaves and their types */
    void configure_slaves(); /** configure all slaves in communication chain */
    void init(); /** code to be executed in the first iteration of the loop */
    void loop(); /** control loop */
    esmacat_ethercat_arduino_shield_by_esmacat ecat_as; /**< create your Esmacat slave object */
//    esmacat_motor_driver ecat_md;

    uint32_t curr_counter;
public:
    /** A constructor- sets initial values for class members */
    my_app()
    {
        curr_counter = 0;
    }
};

#endif // MY_APP_H
