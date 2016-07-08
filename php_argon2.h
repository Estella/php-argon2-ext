#ifndef PHP_ARGON2_H
#define PHP_ARGON2_H

#define argon2_module_ptr &argon2_module_entry
#define phpext_argon2_ptr argon2_module_ptr

#define PHP_ARGON2_VERSION "1.0.4"

#define ARGON2_MEMORY_COST 1<<16
#define ARGON2_TIME_COST 3
#define ARGON2_THREADS 1

#ifdef ZTS
#include "TSRM.h"
#endif

#if defined(ZTS) && defined(COMPILE_DL_EXTNAME)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif