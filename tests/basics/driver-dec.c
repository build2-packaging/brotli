#include <brotli/decode.h>

int
main ()
{
  BrotliDecoderState* s = BrotliDecoderCreateInstance (NULL, NULL, NULL);
  if (s == NULL)
    return 1;
  BrotliDecoderDestroyInstance (s);
  return 0;
}
