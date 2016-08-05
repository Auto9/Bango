//#ifndef _CSOCKET_
//#define _CSOCKET_

#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <Protocol/Packet.h>
#include <Protocol/MainProtocol.h>
#include <minwindef.h>

class CSocket
{
public:
	static char* WriteV(char* packet, va_list va);

	static char* ReadPacket(char* packet, const char* format, ...);
};

//#endif _CSOCKET_