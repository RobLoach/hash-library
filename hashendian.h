// //////////////////////////////////////////////////////////
// hashendian.h
// Copyright (c) 2017 Rob Loach http://robloach.net All rights reserved.
// see http://create.stephan-brumme.com/disclaimer.html
//

#ifndef __HASHENDIAN_H__
#define __HASHENDIAN_H__ 1

#ifndef _MSC_VER
#  ifdef BSD
#    include <sys/endian.h>
#  elif defined(OS_SOLARIS)
#    include <sys/isa_defs.h>
#    ifdef _LITTLE_ENDIAN
#      define LITTLE_ENDIAN
#    else
#      define BIG_ENDIAN
#    endif
#  elif defined(OS_FREEBSD) || defined(OS_OPENBSD) || defined(OS_NETBSD) || defined(OS_DRAGONFLYBSD)
#    include <sys/types.h>
#    include <sys/endian.h>
#  elif __APPLE__
#    include <libkern/OSByteOrder.h>
#    define htobe16(x) OSSwapHostToBigInt16(x)
#    define htole16(x) OSSwapHostToLittleInt16(x)
#    define be16toh(x) OSSwapBigToHostInt16(x)
#    define le16toh(x) OSSwapLittleToHostInt16(x)
#    define htobe32(x) OSSwapHostToBigInt32(x)
#    define htole32(x) OSSwapHostToLittleInt32(x)
#    define be32toh(x) OSSwapBigToHostInt32(x)
#    define le32toh(x) OSSwapLittleToHostInt32(x)
#    define htobe64(x) OSSwapHostToBigInt64(x)
#    define htole64(x) OSSwapHostToLittleInt64(x)
#    define be64toh(x) OSSwapBigToHostInt64(x)
#    define le64toh(x) OSSwapLittleToHostInt64(x)
#  else
#    include <endian.h>
#  endif
#endif

#endif  // __HASHENDIAN_H__
