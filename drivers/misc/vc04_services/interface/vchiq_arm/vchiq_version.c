#include "vchiq_build_info.h"
#include <linux/broadcom/vc_debug_sym.h>

VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_hostname, "akiratoriyama" );
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_version, "c06f4c941237343d84c5f4eb745f1ca533d6184b (tainted)" );
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_time,    __TIME__ );
VC_DEBUG_DECLARE_STRING_VAR( vchiq_build_date,    __DATE__ );

const char *vchiq_get_build_hostname( void )
{
   return vchiq_build_hostname;
}

const char *vchiq_get_build_version( void )
{
   return vchiq_build_version;
}

const char *vchiq_get_build_date( void )
{
   return vchiq_build_date;
}

const char *vchiq_get_build_time( void )
{
   return vchiq_build_time;
}
