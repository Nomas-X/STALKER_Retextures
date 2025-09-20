#define MAJOR 1
#define MINOR 0
#define PATCH 0
#define BUILD 23

// #define VERSION MACROS
#define VERSION MAJOR.MINOR
#define VERSION_AR MAJOR,MINOR,PATCH,BUILD
#define VERSION_STR MAJOR##.##MINOR##.##PATCH##.##BUILD


#ifndef VERSION
    #define VERSION 0
#endif

#ifndef VERSION_STR
    #define VERSION_STR VERSION
#endif

#ifndef VERSION_AR
    #define VERSION_AR VERSION
#endif

#ifndef VERSION_CONFIG
    #define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION_STR); versionAr[] = {VERSION_AR}
#endif
