extern unsigned char dat_00295c6c;
extern unsigned char dat_00295c80;
__declspec(naked) void sub_00014C80(void)
{
    __asm {
        sub esp, 0Ch
        movss xmm0, dword ptr [dat_00295c6c]
        movss dword ptr [esp], xmm0
        movss xmm0, dword ptr [dat_00295c80]
        movss dword ptr [esp + 4h], xmm0
        rsqrtss xmm0, dword ptr [esp + 10h]
        movss xmm1, dword ptr [esp + 10h]
        mulss xmm1, xmm0
        movss xmm2, dword ptr [esp + 4h]
        mulss xmm1, xmm0
        mulss xmm0, dword ptr [esp]
        subss xmm2, xmm1
        mulss xmm0, xmm2
        xorps xmm1, xmm1
        mulss xmm0, dword ptr [esp + 10h]
        cmpneqss xmm1, dword ptr [esp + 10h]
        andps xmm0, xmm1
        movss dword ptr [esp + 8h], xmm0
        movss xmm0, dword ptr [esp + 8h]
        add esp, 0Ch
        ret
    }
}
