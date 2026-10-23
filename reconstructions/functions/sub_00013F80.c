extern unsigned char dat_00295c74;
extern unsigned char dat_00295c70;
extern unsigned char dat_00295d5c;
__declspec(naked) void sub_00013F80(void)
{
    __asm {
        movss xmm1, dword ptr [eax + 4E4h]
        movss xmm0, dword ptr [dat_00295c74]
        comiss xmm1, xmm0
        jc L_13F9A
        comiss xmm0, xmm1
        ja L_13FDB
        L_13F9A:
        movss xmm1, dword ptr [eax + 4E4h]
        movss xmm0, dword ptr [dat_00295c70]
        comiss xmm1, xmm0
        jc L_13FEB
        mov cl, byte ptr [eax + 8F1h]
        test cl, cl
        movss dword ptr [eax + 4E4h], xmm0
        jnz L_13FEB
        mov cl, byte ptr [eax + 8E0h]
        cmp cl, 3h
        jnc L_13FEB
        inc cl
        mov byte ptr [eax + 8E0h], cl
        mov byte ptr [eax + 8F1h], 1h
        L_13FDB:
        movss xmm0, dword ptr [dat_00295d5c]
        movss dword ptr [eax + 4E4h], xmm0
        L_13FEB:
        ret
    }
}
