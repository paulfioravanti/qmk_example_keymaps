#include "../../config.h"

// Keep N-key rollover (NKRO) on by default
// What is NKRO:
// https://en.wikipedia.org/wiki/Rollover_(key)#n-key_rollover
// Reference for why this line needs to be here:
// https://github.com/qmk/qmk_firmware/issues/1695#issuecomment-328346224
#define FORCE_NKRO
