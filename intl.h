#ifdef __ANDROID__
#define _(x) (x)
#define gettext(x) (x)
#else
#include <libintl.h>
#define _(String) gettext (String)
#endif
