#include <brotli/encode.h>

int
main ()
{
  BrotliEncoderState* s = BrotliEncoderCreateInstance (NULL, NULL, NULL);
  if (s == NULL)
    return 1;
  BrotliEncoderDestroyInstance (s);
  return 0;
}
