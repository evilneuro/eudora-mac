type 'CSOm' as 'STR ' ;resource 'CSOm' (1, "Preferences Version") {	"1.0a12"};#include "buildversion.h"#ifdef EXPIRE#define EXPIRATION $$Format("-%02d.%02d",EXP_MONTH,EXP_YEAR%100)#else#define EXPIRATION ""#endif#if defined VALPHA#define RELEASE_LEVEL alpha#define RELEASE_STRING	"alpha"#define RELEASE_SHORT	"a"#define BUILD_STRING $$Format("%d",BUILD_VERSION)#elif defined VBETA#define RELEASE_LEVEL beta#define RELEASE_STRING	"beta"#define RELEASE_SHORT	"b"#define BUILD_STRING $$Format("%d",BUILD_VERSION)#elif defined VFINAL#define RELEASE_LEVEL beta#define RELEASE_STRING	"final candidate"#define RELEASE_SHORT	"fc"#define BUILD_STRING $$Format("%d",BUILD_VERSION)#elif defined VRELEASE#define RELEASE_LEVEL release#define RELEASE_STRING	""#define RELEASE_SHORT	""#define BUILD_STRING ""#endif//"Demo" needs to show up in the release string ...#ifdef	I_HATE_THE_BOX#define	BOX_STRING "Retail"#define BOX_SHORT	"r"#else#define BOX_STRING ""#define BOX_SHORT ""#endif//"Light" needs to show up in the release string ...#ifdef	LIGHT#define	LIGHT_STRING " Light "#define LIGHT_SHORT "l"#else#define	LIGHT_STRING ""#define LIGHT_SHORT ""#endifresource 'vers' (1, purgeable) {  MAJOR_VERSION,MINOR_VERSION<<4 | INC_VERSION,	RELEASE_LEVEL,	BUILD_VERSION,	verUs,#if INC_VERSION	$$Format("%d.%d.%d%s%s%s",MAJOR_VERSION,MINOR_VERSION,INC_VERSION,LIGHT_STRING,BOX_STRING,RELEASE_STRING),	$$Format("%d.%d.%d%s%s%s%s%s",MAJOR_VERSION,MINOR_VERSION,INC_VERSION,LIGHT_SHORT,BOX_SHORT,RELEASE_SHORT,BUILD_STRING,EXPIRATION),#else	$$Format("%d.%d%s%s%s",MAJOR_VERSION,MINOR_VERSION,LIGHT_STRING,BOX_STRING,RELEASE_STRING),	$$Format("%d.%d%s%s%s%s%s",MAJOR_VERSION,MINOR_VERSION,LIGHT_SHORT,BOX_SHORT,RELEASE_SHORT,BUILD_STRING,EXPIRATION),#endif};resource 'CSOm' (2, "Version") {#if INC_VERSION	$$Format("%d.%d.%d%s%s%s%s%s",MAJOR_VERSION,MINOR_VERSION,INC_VERSION,LIGHT_SHORT,BOX_SHORT,RELEASE_SHORT,BUILD_STRING,EXPIRATION)#else	$$Format("%d.%d%s%s%s%s%s",MAJOR_VERSION,MINOR_VERSION,LIGHT_SHORT,BOX_SHORT,RELEASE_SHORT,BUILD_STRING,EXPIRATION)#endif};