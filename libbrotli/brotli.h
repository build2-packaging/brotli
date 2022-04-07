#pragma once

#include <stdio.h>

#include <libbrotli/export.h>

/* Print a greeting for the specified name into the specified
 * stream. On success, return the number of characters printed.
 * On failure, set errno and return a negative value.
 */
LIBBROTLI_SYMEXPORT int
say_hello (FILE *, const char *name);
