#include <stdint.h>
/* Address-pinned exact x86 body from current REA instruction and byte evidence. */
__declspec(naked) uint32_t __cdecl sub_00082DC0(uint32_t node, uint32_t context) {
    __asm {
        /* byte 0: 8B */
        __emit 0x8B;
        /* byte 1: 44 */
        __emit 0x44;
        /* byte 2: 24 */
        __emit 0x24;
        /* byte 3: 04 */
        __emit 0x04;
        /* byte 4: 8B */
        __emit 0x8B;
        /* byte 5: 50 */
        __emit 0x50;
        /* byte 6: FC */
        __emit 0xFC;
        /* byte 7: 56 */
        __emit 0x56;
        /* byte 8: 8B */
        __emit 0x8B;
        /* byte 9: 74 */
        __emit 0x74;
        /* byte 10: 24 */
        __emit 0x24;
        /* byte 11: 0C */
        __emit 0x0C;
        /* byte 12: 33 */
        __emit 0x33;
        /* byte 13: C9 */
        __emit 0xC9;
        /* byte 14: 3B */
        __emit 0x3B;
        /* byte 15: D6 */
        __emit 0xD6;
        /* byte 16: 0F */
        __emit 0x0F;
        /* byte 17: 95 */
        __emit 0x95;
        /* byte 18: C1 */
        __emit 0xC1;
        /* byte 19: 5E */
        __emit 0x5E;
        /* byte 20: 49 */
        __emit 0x49;
        /* byte 21: 23 */
        __emit 0x23;
        /* byte 22: C1 */
        __emit 0xC1;
        /* byte 23: C3 */
        __emit 0xC3;
    }
}
