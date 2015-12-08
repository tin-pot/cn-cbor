#ifndef PORTING_H_INCLUDED
#define PORTING_H_INCLUDED

#ifdef _WIN32
# include <stdlib.h> /* _byteswap_*() */

# define bool     char
# define true        1
# define false       0

typedef unsigned  char   uint8_t;
typedef unsigned  short  uint16_t;
typedef signed    short   int16_t;
typedef unsigned  int    uint32_t;
typedef signed    int     int32_t;
typedef unsigned _int64  uint64_t;
typedef signed   _int64   int64_t;

# define ntohs _byteswap_ushort
# define ntohl _byteswap_ulong
# define htons _byteswap_ushort
# define htonl _byteswap_ulong

# define INFINITY HUGE_VAL
# define NAN (HUGE_VAL-HUGE_VAL)

# define ssize_t ptrdiff_t

# define inline __inline
#else
# include <stdbool.h>
# include <stdint.h>
# include <sys/stat.h>
# include <fcntl.h>

# include <arpa/inet.h> // needed for ntohl (e.g.) on Linux
# include <unistd.h>
# include <strings.h>
#endif

#endif /* PORTING_H_INCLUDED */