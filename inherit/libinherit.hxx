#ifndef __LIBINHERIT_GW_HXX__
#define __LIBINHERIT_GW_HXX__

#ifdef _MSC_VER
#ifdef LIBINHERIT_GW_EXPORTS
#define LIBINHERIT_GW_IMPEXP __declspec(dllexport)
#else
#define LIBINHERIT_GW_IMPEXP __declspec(dllimport)
#endif
#else
#define LIBINHERIT_GW_IMPEXP
#endif

extern "C" LIBINHERIT_GW_IMPEXP int libinherit(wchar_t* _pwstFuncName);



#endif /* __LIBINHERIT_GW_HXX__ */
