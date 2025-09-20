#include "\x\cba\addons\main\script_macros.hpp"
#include "\z\ace\addons\main\script_macros.hpp"
#include "script_macros_zrn.hpp"

#ifndef DOUBLES
    #define DOUBLES(var1,var2) var1##_##var2
#endif
#ifndef TRIPLES
    #define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#endif

#ifndef GVAR
    #define GVAR(var1) DOUBLES(ADDON,var1)
    #define EGVAR(var1,var2) TRIPLES(PREFIX,var1,var2)
    #define QGVAR(var1) QUOTE(GVAR(var1))
    #define QEGVAR(var1,var2) QUOTE(EGVAR(var1,var2))
    #define QQGVAR(var1) QUOTE(QGVAR(var1))
    #define QQEGVAR(var1,var2) QUOTE(QEGVAR(var1,var2))
#endif
