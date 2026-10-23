extern unsigned int dat_002d45f0;
extern unsigned char dat_00295e48;
extern unsigned char dat_00295e44;
extern unsigned char dat_00295e58;
__declspec(naked) void sub_00015B50(void)
{
    __asm {
        mov eax, [dat_002d45f0]
        mov eax, dword ptr [eax + 2014Ch]
        cmp eax, 3h
        ja L_15B98
        jmp dword ptr [eax*4h + 15B9Ch]
        movss xmm0, dword ptr [ecx + 2F0h]
        mulss xmm0, dword ptr [dat_00295e48]
        jmp L_15B89
        movss xmm0, dword ptr [ecx + 2F0h]
        mulss xmm0, dword ptr [dat_00295e44]
        L_15B89:
        comiss xmm0, dword ptr [dat_00295e58]
        jc L_15B98
        mov eax, 1h
        ret
        L_15B98:
        xor eax, eax
        ret
    }
}
