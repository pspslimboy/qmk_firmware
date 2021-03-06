#pragma once

#define USB_POLLING_INTERVAL_MS 1
#define FORCE_NKRO

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
#define GNU_UNDERGLOW_MAXIMUM_BRIGHTNESS RGB_MATRIX_MAXIMUM_BRIGHTNESS

#define ONESHOT_TIMEOUT 2500
#define ONESHOT_TAP_TOGGLE 5

/* Disable unused and unneeded features to reduce on firmware size */
#ifdef LOCKING_SUPPORT_ENABLE
    #undef LOCKING_SUPPORT_ENABLE
#endif
#ifdef LOCKING_RESYNC_ENABLE
    #undef LOCKING_RESYNC_ENABLE
#endif
