extern unsigned char dat_002ace70;
extern unsigned char dat_002ace80;
extern unsigned char dat_002ace90;
extern unsigned char dat_002f4390;
__declspec(naked) void sub_00012140(void)
{
    __asm {
        movaps xmm0, xmmword ptr [dat_002ace70]
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [dat_002ace80]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [dat_002ace90]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [dat_002f4390]
        movaps xmmword ptr [eax + 30h], xmm0
        ret
    }
}
