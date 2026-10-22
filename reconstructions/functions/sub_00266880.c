#include <stdint.h>

/* Input is live in EAX; result is AL. */
__declspec(naked) uint32_t sub_00266880(void)
{
    __asm {
        cmp eax, 0Ch
        je short accepted
        cmp eax, 0Dh
        jbe short rejected
        cmp eax, 0Fh
        jbe short accepted
        rejected:
        xor al, al
        ret
    accepted:
        mov al, 1
        ret
    }
}


