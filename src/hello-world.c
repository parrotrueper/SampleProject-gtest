
#include "hello-world.h"
#include "dev_debug.h"


int hello_world_main(uint8_t *i_pChar_buffer, uint32_t i_u32Length)
{
    int result = 0;

    DD_ASSERT(0 != i_pChar_buffer);
    DD_ASSERT(0 != i_u32Length);

    if ( ( i_pChar_buffer == 0 ) || ( i_u32Length < 1) ){
        result = -1;
    }else{
        i_pChar_buffer[i_u32Length] = '\0';
        printf("%s\n", i_pChar_buffer);
    }
    return result;
}