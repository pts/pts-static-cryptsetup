/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* maximum keyfile size (in KiB) */
#define DEFAULT_KEYFILE_SIZE_MAXKB 8192

/* cipher for loop-AES mode */
#define DEFAULT_LOOPAES_CIPHER "aes"

/* key length in bits for loop-AES mode */
#define DEFAULT_LOOPAES_KEYBITS 256

/* cipher for LUKS1 */
#define DEFAULT_LUKS1_CIPHER "aes"

/* hash function for LUKS1 header */
#define DEFAULT_LUKS1_HASH "sha1"

/* PBKDF2 iteration time for LUKS1 (in ms) */
#define DEFAULT_LUKS1_ITER_TIME 1000

/* key length in bits for LUKS1 */
#define DEFAULT_LUKS1_KEYBITS 256

/* cipher mode for LUKS1 */
#define DEFAULT_LUKS1_MODE "xts-plain64"

/* maximum keyfile size (in characters) */
#define DEFAULT_PASSPHRASE_SIZE_MAX 512

/* cipher for plain mode */
#define DEFAULT_PLAIN_CIPHER "aes"

/* password hashing function for plain mode */
#define DEFAULT_PLAIN_HASH "ripemd160"

/* key length in bits for plain mode */
#define DEFAULT_PLAIN_KEYBITS 256

/* cipher mode for plain mode */
#define DEFAULT_PLAIN_MODE "cbc-essiv:sha256"

/* default RNG type for key generator */
#define DEFAULT_RNG "/dev/urandom"

/* data block size for verity mode */
#define DEFAULT_VERITY_DATA_BLOCK 4096

/* hash function for verity mode */
#define DEFAULT_VERITY_HASH "sha256"

/* hash block size for verity mode */
#define DEFAULT_VERITY_HASH_BLOCK 4096

/* salt size for verity mode */
#define DEFAULT_VERITY_SALT_SIZE 32

/* Enable using of kernel userspace crypto */
#define ENABLE_AF_ALG 1

/* Enable FIPS mode restrictions */
/* #undef ENABLE_FIPS */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Enable password quality checking */
/* #undef ENABLE_PWQUALITY */

/* Requested gcrypt version */
/* #undef GCRYPT_REQ_VERSION */

/* Define to 1 if you have the <byteswap.h> header file. */
#define HAVE_BYTESWAP_H 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the declaration of `dm_task_retry_remove', and to 0
   if you don't. */
#define HAVE_DECL_DM_TASK_RETRY_REMOVE 0

/* Define to 1 if you have the declaration of `dm_task_secure_data', and to 0
   if you don't. */
#define HAVE_DECL_DM_TASK_SECURE_DATA 0

/* Define to 1 if you have the declaration of
   `DM_UDEV_DISABLE_DISK_RULES_FLAG', and to 0 if you don't. */
#define HAVE_DECL_DM_UDEV_DISABLE_DISK_RULES_FLAG 1

/* Define to 1 if you have the declaration of `NSS_GetVersion', and to 0 if
   you don't. */
/* #undef HAVE_DECL_NSS_GETVERSION */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `devmapper' library (-ldevmapper). */
#define HAVE_LIBDEVMAPPER 1

/* Define to 1 if you have the `fipscheck' library (-lfipscheck). */
/* #undef HAVE_LIBFIPSCHECK */

/* Define to 1 if you have the `gcrypt' library (-lgcrypt). */
/* #undef HAVE_LIBGCRYPT */

/* Define to 1 if you have the `nettle' library (-lnettle). */
/* #undef HAVE_LIBNETTLE */

/* Define to 1 if you have the `popt' library (-lpopt). */
#define HAVE_LIBPOPT 1

/* Define to 1 if you have the `selinux' library (-lselinux). */
/* #undef HAVE_LIBSELINUX */

/* Define to 1 if you have the `sepol' library (-lsepol). */
/* #undef HAVE_LIBSEPOL */

/* Define to 1 if you have the `uuid' library (-luuid). */
#define HAVE_LIBUUID 1

/* Define to 1 if you have the <linux/if_alg.h> header file. */
#define HAVE_LINUX_IF_ALG_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <nettle/sha.h> header file. */
/* #undef HAVE_NETTLE_SHA_H */

/* Define to 1 if you have the `posix_memalign' function. */
/* #undef HAVE_POSIX_MEMALIGN */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <uuid/uuid.h> header file. */
#define HAVE_UUID_UUID_H 1

/* library file name for FIPS selfcheck */
/* #undef LIBCRYPTSETUP_VERSION_FIPS */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "cryptsetup"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "cryptsetup"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "cryptsetup 1.6.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "cryptsetup"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.6.2"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Use internal PBKDF2 */
#define USE_INTERNAL_PBKDF2 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Try to use udev synchronisation? */
#define USE_UDEV 1

/* Version number of package */
#define VERSION "1.6.2"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */
