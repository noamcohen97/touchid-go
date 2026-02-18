#ifndef TOUCHID_H
#define TOUCHID_H

#include <Availability.h>

#define TOUCHID_SUCCESS (0)

// macOS 15+ renamed `Watch` to `Companion`. Provide fallback definitions
// so the code compiles against older SDKs (same underlying values).
#if __MAC_OS_X_VERSION_MAX_ALLOWED < 150000
#define LAPolicyDeviceOwnerAuthenticationWithBiometricsOrCompanion LAPolicyDeviceOwnerAuthenticationWithBiometricsOrWatch
#define LAPolicyDeviceOwnerAuthenticationWithCompanion LAPolicyDeviceOwnerAuthenticationWithWatch
#define LAErrorCompanionNotAvailable LAErrorWatchNotAvailable
#endif

#endif
