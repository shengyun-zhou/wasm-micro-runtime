#include "platform_api_vmcore.h"
#include <unistd.h>

int os_getpid() { return getpid(); }
