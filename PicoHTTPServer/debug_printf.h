#pragma once

// configUSE_NEWLIB_REENTRANT makes these safe and reentrant so
// no semaphore is needed... and _write() is no longer exposed...
#define debug_printf printf
#define debug_write(a, b) write(1, a, b)
