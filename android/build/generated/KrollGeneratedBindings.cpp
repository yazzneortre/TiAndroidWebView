/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/6n/j8k0p5pd0g50dkgx8j2g5rgh0000gn/T/yazmin/natwebview-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/6n/j8k0p5pd0g50dkgx8j2g5rgh0000gn/T/yazmin/natwebview-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "metavi.android.wv.NatwebviewModule.h"


#line 13 "/private/var/folders/6n/j8k0p5pd0g50dkgx8j2g5rgh0000gn/T/yazmin/natwebview-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class NatwebviewBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
NatwebviewBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
NatwebviewBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 34,
      MAX_WORD_LENGTH = 34,
      MIN_HASH_VALUE = 34,
      MAX_HASH_VALUE = 34
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 15 "/private/var/folders/6n/j8k0p5pd0g50dkgx8j2g5rgh0000gn/T/yazmin/natwebview-generated/KrollGeneratedBindings.gperf"
      {"metavi.android.wv.NatwebviewModule", ::metavi::android::wv::NatwebviewModule::bindProxy, ::metavi::android::wv::NatwebviewModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/6n/j8k0p5pd0g50dkgx8j2g5rgh0000gn/T/yazmin/natwebview-generated/KrollGeneratedBindings.gperf"

