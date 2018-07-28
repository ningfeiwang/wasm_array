#include <stdio.h>
#include <stdint.h>
#include <emscripten.h>


extern "C"
{
    void fillArray (float* a, int32_t len)
    {
        for ( int i = 0 ; i < len ;++ i )
        {
            a[i] = a[i] * a[i];
        }
    }
}


int main() {
  EM_ASM( allReady() );
}
