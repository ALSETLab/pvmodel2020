// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components
//#include "example_dll.h"

// Header files from additional sources (Advanced C Function)
// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: common_consts.template----------------------------------------100};

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines
//@cmp.def.end

//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables

//@cmp.var.start
// variables
double _impp__out = 4.58;
double _vmpp__out = 35.0;
double _voc__out = 43.8;
double _beta_voc__out = -0.1;
double _isc__out = 5.0;
double _alpha_isc__out = 2e-05;
double _ncell__out = 40.0;
double _e__out = 1000.0;
double _t__out = 25.0;
double _pv_array_shirt_crk_i_te_dependence_constant1__out = 1000.0;
double _pv_array_open_ckt_v_constant4__out = 100.0;
double _pv_array_open_ckt_v_tref__out = 25.0;
double _pv_array_short_ckt_i_t_dependence_constant3__out = 1.0;
double _pv_array_short_ckt_i_t_dependence_tref__out = 25.0;
double _pv_array_short_ckt_i_t_dependence_constant2__out = 100.0;
double _pv_array_short_ckt_i_t_dependence_constant1__out = 100.0;
double _pv_array_thermal_voltage_q__out = 1.6e-19;
double _pv_array_thermal_voltage_k__out = 1.38e-23;
double _pv_array_thermal_voltage_a__out = 1.0;
double _pv_array_thermal_voltage_tref_k__out = 273.15;
double _np__out;
double _ns__out;
double _vdc__out;
double _pv_array_short_ckt_i_t_dependence_product1__out;
double _pv_array_short_ckt_i_t_dependence_product2__out;
double _pv_array_short_ckt_i_t_dependence_product3__out;
double _pv_array_short_ckt_i_t_dependence_sum1__out;
double _pv_array_short_ckt_i_t_dependence_product4__out;
double _pv_array_short_ckt_i_t_dependence_sum2__out;
double _pv_array_short_ckt_i_t_dependence_product5__out;
double _pv_array_shirt_crk_i_te_dependence_product1__out;
double _pv_array_shirt_crk_i_te_dependence_product2__out;
double _pv_array_product1__out;
double _pv_array_open_ckt_v_product1__out;
double _pv_array_open_ckt_v_product2__out;
double _pv_array_open_ckt_v_sum1__out;
double _pv_array_open_ckt_v_product4__out;
double _pv_array_open_ckt_v_sum2__out;
double _pv_array_thermal_voltage_product2__out;
double _pv_array_thermal_voltage_sum1__out;
double _pv_array_thermal_voltage_product1__out;
double _pv_array_thermal_voltage_product3__out;
double _pv_array_thermal_voltage_product4__out;
double _pv_array_dark_current_product1__out;
double _pv_array_dark_current_mathematical_function1__out;
double _pv_array_dark_current_product2__out;
double _pv_array_product2__out;
double _pv_array_product3__out;
double _pv_array_resistance_sum1__out;
double _pv_array_resistance_product1__out;
double _pv_array_resistance_mathematical_function1__out;
double _pv_array_resistance_product2__out;
double _pv_array_resistance_sum2__out;
double _pv_array_resistance_sum3__out;
double _pv_array_resistance_product3__out;
double _pv_array_product4__out;
double _pv_array_product5__out;
double _pv_array_limit1__out;
double _pv_array_transport_delay1__out;
unsigned int _pv_array_transport_delay1__i;
double _pv_array_c_function1__Istart;
double _pv_array_c_function1__I1;
double _pv_array_c_function1__I2;
double _pv_array_c_function1__I3;
double _pv_array_c_function1__I4;
double _pv_array_c_function1__I5;
double _pv_array_c_function1__FI0;
double _pv_array_c_function1__FpI0;
double _pv_array_c_function1__FI1;
double _pv_array_c_function1__FpI1;
double _pv_array_c_function1__FI2;
double _pv_array_c_function1__FpI2;
double _pv_array_c_function1__FI3;
double _pv_array_c_function1__FpI3;
double _pv_array_c_function1__FI4;
double _pv_array_c_function1__FpI4;
double _pv_array_c_function1__Isc;
double _pv_array_c_function1__I0;
double _pv_array_c_function1__Rs;
double _pv_array_c_function1__Vt;
double _pv_array_c_function1__V;


double _pv_array_c_function1__V_array;
double _pv_array_c_function1__I_array;
//@cmp.var.end

//@cmp.svar.start
// state variables
double _pv_array_transport_delay1__state[1000];
unsigned int _pv_array_transport_delay1__cbi;
//@cmp.svar.end
// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {

#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif

    //@cmp.init.block.start


























































    for (_pv_array_transport_delay1__i = 0; _pv_array_transport_delay1__i < 1000; _pv_array_transport_delay1__i++) {
        _pv_array_transport_delay1__state[_pv_array_transport_delay1__i] =  0.0;
    }
    _pv_array_transport_delay1__cbi = 0;

    _pv_array_c_function1__Istart = 0.01;
    _pv_array_c_function1__FI0 = 0;
    _pv_array_c_function1__FpI0 = 0;
    _pv_array_c_function1__I1 = _pv_array_c_function1__Istart;
    _pv_array_c_function1__FI1 = 0;
    _pv_array_c_function1__FpI1 = 0;
    _pv_array_c_function1__I2 = _pv_array_c_function1__I1;
    _pv_array_c_function1__FI2 = 0;
    _pv_array_c_function1__FpI2 = 0;
    _pv_array_c_function1__I3 = _pv_array_c_function1__I2;
    _pv_array_c_function1__FI3 = 0;
    _pv_array_c_function1__FpI3 = 0;
    _pv_array_c_function1__I4 = _pv_array_c_function1__I3;
    _pv_array_c_function1__FI4 = 0;
    _pv_array_c_function1__FpI4 = 0;
    _pv_array_c_function1__I5 = 4.58;

    HIL_OutAO(0x4001, 0.0f);

    HIL_OutAO(0x4000, 0.0f);

    //@cmp.init.block.end
}
// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_user_sp_cpu_dev0() {

#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif

    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Impp

    // Generated from the component: Vmpp

    // Generated from the component: Voc

    // Generated from the component: beta_Voc

    // Generated from the component: Isc

    // Generated from the component: alpha_Isc

    // Generated from the component: Ncell

    // Generated from the component: E

    // Generated from the component: T

    // Generated from the component: PV_array.Shirt_crk_I_TE_dependence.Constant1

    // Generated from the component: PV_array.Open_ckt_V.Constant4

    // Generated from the component: PV_array.Open_ckt_V.Tref

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Constant3

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Tref

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Constant2

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Constant1

    // Generated from the component: PV_array.Thermal_Voltage.q

    // Generated from the component: PV_array.Thermal_Voltage.K

    // Generated from the component: PV_array.Thermal_Voltage.A

    // Generated from the component: PV_array.Thermal_Voltage.Tref_K

    // Generated from the component: Np
    _np__out = XIo_InFloat(0x55000100);

    // Generated from the component: Ns
    _ns__out = XIo_InFloat(0x55000108);

    // Generated from the component: VDC
    _vdc__out = XIo_InFloat(0x55000104);

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Product1
    _pv_array_short_ckt_i_t_dependence_product1__out = (_alpha_isc__out) * 1.0 / (_isc__out);

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Product2
    _pv_array_short_ckt_i_t_dependence_product2__out = (_pv_array_short_ckt_i_t_dependence_product1__out * _pv_array_short_ckt_i_t_dependence_constant1__out);

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Product3
    _pv_array_short_ckt_i_t_dependence_product3__out = (_pv_array_short_ckt_i_t_dependence_product2__out) * 1.0 / (_pv_array_short_ckt_i_t_dependence_constant2__out);

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Sum1
    _pv_array_short_ckt_i_t_dependence_sum1__out = _t__out - _pv_array_short_ckt_i_t_dependence_tref__out;

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Product4
    _pv_array_short_ckt_i_t_dependence_product4__out = (_pv_array_short_ckt_i_t_dependence_product3__out * _pv_array_short_ckt_i_t_dependence_sum1__out);

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Sum2
    _pv_array_short_ckt_i_t_dependence_sum2__out = _pv_array_short_ckt_i_t_dependence_constant3__out + _pv_array_short_ckt_i_t_dependence_product4__out;

    // Generated from the component: PV_array.Short_ckt_I_T_dependence.Product5
    _pv_array_short_ckt_i_t_dependence_product5__out = (_isc__out * _pv_array_short_ckt_i_t_dependence_sum2__out);

    // Generated from the component: PV_array.Shirt_crk_I_TE_dependence.Product1
    _pv_array_shirt_crk_i_te_dependence_product1__out = (_e__out) * 1.0 / (_pv_array_shirt_crk_i_te_dependence_constant1__out);

    // Generated from the component: PV_array.Shirt_crk_I_TE_dependence.Product2
    _pv_array_shirt_crk_i_te_dependence_product2__out = (_pv_array_short_ckt_i_t_dependence_product5__out * _pv_array_shirt_crk_i_te_dependence_product1__out);

    // Generated from the component: PV_array.Product1
    _pv_array_product1__out = (_np__out * _pv_array_shirt_crk_i_te_dependence_product2__out);

    // Generated from the component: PV_array.Open_ckt_V.Product1
    _pv_array_open_ckt_v_product1__out = (_beta_voc__out) * 1.0 / (_pv_array_open_ckt_v_constant4__out);

    // Generated from the component: PV_array.Open_ckt_V.Product2
    _pv_array_open_ckt_v_product2__out = (_pv_array_open_ckt_v_product1__out * _voc__out);

    // Generated from the component: PV_array.Open_ckt_V.Sum1
    _pv_array_open_ckt_v_sum1__out = _t__out - _pv_array_open_ckt_v_tref__out;

    // Generated from the component: PV_array.Open_ckt_V.Product4
    _pv_array_open_ckt_v_product4__out = (_pv_array_open_ckt_v_product2__out * _pv_array_open_ckt_v_sum1__out);

    // Generated from the component: PV_array.Open_ckt_V.Sum2
    _pv_array_open_ckt_v_sum2__out = _voc__out + _pv_array_open_ckt_v_product4__out;

    // Generated from the component: PV_array.Thermal_Voltage.Product2
    _pv_array_thermal_voltage_product2__out = (_pv_array_thermal_voltage_a__out * _pv_array_thermal_voltage_k__out);

    // Generated from the component: PV_array.Thermal_Voltage.Sum1
    _pv_array_thermal_voltage_sum1__out = _t__out + _pv_array_thermal_voltage_tref_k__out;

    // Generated from the component: PV_array.Thermal_Voltage.Product1
    _pv_array_thermal_voltage_product1__out = (_pv_array_thermal_voltage_product2__out * _pv_array_thermal_voltage_sum1__out);

    // Generated from the component: PV_array.Thermal_Voltage.Product3
    _pv_array_thermal_voltage_product3__out = (_pv_array_thermal_voltage_product1__out) * 1.0 / (_pv_array_thermal_voltage_q__out);

    // Generated from the component: PV_array.Thermal_Voltage.Product4
    _pv_array_thermal_voltage_product4__out = (_ncell__out * _pv_array_thermal_voltage_product3__out);

    // Generated from the component: PV_array.Dark_Current.Product1
    _pv_array_dark_current_product1__out = (_pv_array_open_ckt_v_sum2__out) * 1.0 / (_pv_array_thermal_voltage_product4__out);

    // Generated from the component: PV_array.Dark_Current.Mathematical function1
    _pv_array_dark_current_mathematical_function1__out = pow(M_E, _pv_array_dark_current_product1__out);

    // Generated from the component: PV_array.Dark_Current.Product2
    _pv_array_dark_current_product2__out = (_pv_array_short_ckt_i_t_dependence_product5__out) * 1.0 / (_pv_array_dark_current_mathematical_function1__out);

    // Generated from the component: PV_array.Product2
    _pv_array_product2__out = (_np__out * _pv_array_dark_current_product2__out);

    // Generated from the component: PV_array.Product3
    _pv_array_product3__out = (_ns__out) * 1.0 / (_np__out);

    // Generated from the component: PV_array.Resistance.Sum1
    _pv_array_resistance_sum1__out = _isc__out - _impp__out;

    // Generated from the component: PV_array.Resistance.Product1
    _pv_array_resistance_product1__out = (_pv_array_resistance_sum1__out) * 1.0 / (_isc__out);

    // Generated from the component: PV_array.Resistance.Mathematical function1
    _pv_array_resistance_mathematical_function1__out = log(_pv_array_resistance_product1__out);

    // Generated from the component: PV_array.Resistance.Product2
    _pv_array_resistance_product2__out = (_pv_array_thermal_voltage_product4__out * _pv_array_resistance_mathematical_function1__out);

    // Generated from the component: PV_array.Resistance.Sum2
    _pv_array_resistance_sum2__out = _pv_array_resistance_product2__out + _voc__out;

    // Generated from the component: PV_array.Resistance.Sum3
    _pv_array_resistance_sum3__out = _pv_array_resistance_sum2__out - _vmpp__out;

    // Generated from the component: PV_array.Resistance.Product3
    _pv_array_resistance_product3__out = (_pv_array_resistance_sum3__out) * 1.0 / (_impp__out);

    // Generated from the component: PV_array.Product4
    _pv_array_product4__out = (_pv_array_product3__out * _pv_array_resistance_product3__out);

    // Generated from the component: PV_array.Product5
    _pv_array_product5__out = (_ns__out * _pv_array_thermal_voltage_product4__out);

    // Generated from the component: PV_array.Limit1
    if (_vdc__out > 876.0) {
        _pv_array_limit1__out = 876.0;
    } else if (_vdc__out < 0.0) {
        _pv_array_limit1__out = 0.0;
    } else {
        _pv_array_limit1__out = _vdc__out;
    }

    // Generated from the component: PV_array.Transport Delay1
    _pv_array_transport_delay1__out = _pv_array_transport_delay1__state[_pv_array_transport_delay1__cbi];

    // Generated from the component: PV_array.C function1
    _pv_array_c_function1__Isc = _pv_array_product1__out;
    _pv_array_c_function1__I0 = _pv_array_product2__out;
    _pv_array_c_function1__Rs = _pv_array_product4__out;
    _pv_array_c_function1__Vt = _pv_array_product5__out;
    _pv_array_c_function1__V = _pv_array_transport_delay1__out;

    _pv_array_c_function1__FI0 = _pv_array_c_function1__Istart - _pv_array_c_function1__Isc + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__Istart * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt) - 1);
    _pv_array_c_function1__FpI0 = 1 + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__Istart * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt)) * _pv_array_c_function1__Rs / _pv_array_c_function1__Vt;
    _pv_array_c_function1__I1 = _pv_array_c_function1__Istart - _pv_array_c_function1__FI0 / _pv_array_c_function1__FpI0;
    _pv_array_c_function1__FI1 = _pv_array_c_function1__I1 - _pv_array_c_function1__Isc + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I1 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt) - 1);
    _pv_array_c_function1__FpI1 = 1 + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I1 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt)) * _pv_array_c_function1__Rs / _pv_array_c_function1__Vt;
    _pv_array_c_function1__I2 = _pv_array_c_function1__I1 - _pv_array_c_function1__FI1 / _pv_array_c_function1__FpI1;
    _pv_array_c_function1__FI2 = _pv_array_c_function1__I2 - _pv_array_c_function1__Isc + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I2 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt) - 1);
    _pv_array_c_function1__FpI2 = 1 + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I2 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt)) * _pv_array_c_function1__Rs / _pv_array_c_function1__Vt;
    _pv_array_c_function1__I3 = _pv_array_c_function1__I2 - _pv_array_c_function1__FI2 / _pv_array_c_function1__FpI2;
    _pv_array_c_function1__FI3 = _pv_array_c_function1__I3 - _pv_array_c_function1__Isc + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I3 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt) - 1);
    _pv_array_c_function1__FpI3 = 1 + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I3 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt)) * _pv_array_c_function1__Rs / _pv_array_c_function1__Vt;
    _pv_array_c_function1__I4 = _pv_array_c_function1__I3 - _pv_array_c_function1__FI3 / _pv_array_c_function1__FpI3;
    _pv_array_c_function1__FI4 = _pv_array_c_function1__I4 - _pv_array_c_function1__Isc + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I4 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt) - 1);
    _pv_array_c_function1__FpI4 = 1 + _pv_array_c_function1__I0 * (exp((_pv_array_c_function1__V + _pv_array_c_function1__I4 * _pv_array_c_function1__Rs) / _pv_array_c_function1__Vt)) * _pv_array_c_function1__Rs / _pv_array_c_function1__Vt;
    _pv_array_c_function1__I5 = _pv_array_c_function1__I4 - _pv_array_c_function1__FI4 / _pv_array_c_function1__FpI4;
    _pv_array_c_function1__I_array = _pv_array_c_function1__I5;
    _pv_array_c_function1__V_array = _pv_array_c_function1__V;

    // Generated from the component: V_array
    HIL_OutAO(0x4001, (float)_pv_array_c_function1__V_array);
    // Generated from the component: I_array
    HIL_OutAO(0x4000, (float)_pv_array_c_function1__I_array);
    //@cmp.out.block.end


    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: PV_array.Transport Delay1
    _pv_array_transport_delay1__state[_pv_array_transport_delay1__cbi] = _pv_array_limit1__out;
    if (_pv_array_transport_delay1__cbi < 999)
        _pv_array_transport_delay1__cbi++;
    else
        _pv_array_transport_delay1__cbi = 0;

    // Generated from the component: PV_array.C function1


    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------