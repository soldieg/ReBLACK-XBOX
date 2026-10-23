extern unsigned int dat_002d45f0;
extern unsigned char dat_00288898;
extern unsigned char dat_002888a0;
__declspec(naked) void sub_00013F10(void)
{
    __asm {
        mov eax, [dat_002d45f0]
        mov eax, dword ptr [eax + 2014Ch]
        cmp eax, 3h
        ja L_13F56
        jmp dword ptr [eax*4h + 13F5Ch]
        movss xmm0, dword ptr [esp + 4h]
        mulss xmm0, dword ptr [dat_00288898]
        movss dword ptr [ecx + 2F0h], xmm0
        ret 4h
        movss xmm0, dword ptr [esp + 4h]
        mulss xmm0, dword ptr [dat_002888a0]
        movss dword ptr [ecx + 2F0h], xmm0
        L_13F56:
        ret 4h
    }
}
