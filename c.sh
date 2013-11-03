#! /bin/sh --
BINPREFIX='/home/pts/prg/pts-mini-gpl/uevalrun/cross-compiler/bin/i686-'
CC="${BINPREFIX}gcc -static -fno-stack-protector"
AR="${BINPREFIX}ar"
RANLIB="${BINPREFIX}ranlib"

set -ex
rm -f *.o *.a cryptsetup
# TODO: Get rid of warnings.
$CC -s -O2 -W -Wall -Ilib/luks1 -Ilib/loopaes -Ilib/verity -Ilib/tcrypt \
    -Ilib/crypto_backend -Ilib -include config.h \
    -Wno-unused-parameter \
    -DHAVE_CONFIG_H -c \
    lib/setup.c lib/utils.c lib/utils_benchmark.c lib/utils_crypt.c \
    lib/utils_loop.c lib/utils_devpath.c lib/utils_wipe.c lib/utils_fips.c \
    lib/utils_device.c lib/libdevmapper.c lib/volumekey.c lib/random.c \
    lib/crypt_plain.c lib/crypto_backend/crc32.c \
    lib/crypto_backend/crypto_cipher_kernel.c \
    lib/crypto_backend/crypto_kernel.c lib/crypto_backend/pbkdf2_generic.c \
    lib/crypto_backend/pbkdf_check.c lib/luks1/af.c \
    lib/luks1/keyencryption.c lib/luks1/keymanage.c lib/loopaes/loopaes.c \
    lib/verity/verity.c lib/verity/verity_hash.c lib/tcrypt/tcrypt.c

$AR cr libcryptsetup.a *.o
$RANLIB libcryptsetup.a

# TODO: Get rid of warnings.
$CC -s -O2 -W -Wall -Ilib/luks1 -Ilib/loopaes -Ilib/verity -Ilib/tcrypt \
    -Ilib/crypto_backend -Ilib -I. -include config.h \
    -Wno-unused-parameter \
    -DHAVE_CONFIG_H -o cryptsetup \
    src/utils_tools.c src/utils_password.c src/cryptsetup.c \
    libcryptsetup.a -luuid -ldevmapper -lpopt

: c.sh OK.
