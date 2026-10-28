

/*--------------------------------------------------------------------------*/
#ifndef __DYNLIB_CONSOLE_H__
#define __DYNLIB_CONSOLE_H__

#ifdef _MSC_VER
#ifdef CONSOLE_EXPORTS
#define CONSOLE_IMPEXP __declspec(dllexport)
#else
#define CONSOLE_IMPEXP __declspec(dllimport)
#endif
#else
#define CONSOLE_IMPEXP
#endif

#endif /* __DYNLIB_CONSOLE_H__ */
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
#ifndef __DYNLIB_CONSOLE_GW_H__
#define __DYNLIB_CONSOLE_GW_H__

#ifdef _MSC_VER
#ifdef CONSOLE_GW_EXPORTS
#define EXTERN_CONSOLE_GW __declspec(dllexport)
#else
#define EXTERN_CONSOLE_GW __declspec(dllimport)
#endif
#else
#define EXTERN_CONSOLE_GW
#endif

#endif /* __DYNLIB_CONSOLE_GW_H__ */
/*--------------------------------------------------------------------------*/
