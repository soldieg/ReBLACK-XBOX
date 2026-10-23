extern unsigned int dat_002d45f0;
extern unsigned int dat_00295e48;
extern unsigned int dat_00295e44;
__declspec(naked) void sub_00013EC0(void)
{
    __asm {
        mov eax, [dat_002d45f0]
        mov eax, dword ptr [eax + 2014Ch]
        cmp eax, 3h
        ja L_13EF9
        jmp dword ptr [eax*4h + 13F00h]
        movss xmm0, dword ptr [ecx + 2F0h]
        mulss xmm0, dword ptr [dat_00295e48]
        ret
        movss xmm0, dword ptr [ecx + 2F0h]
        mulss xmm0, dword ptr [dat_00295e44]
        ret
        L_13EF9:
        xorps xmm0, xmm0
        ret
    }
}
