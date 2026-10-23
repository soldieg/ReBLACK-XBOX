extern float DAT_0028A938;

void __declspec(naked) sub_00011870(void)
{
    __asm {
        push ecx
        movss dword ptr [esp], xmm0
        fld dword ptr [esp]
        fabs
        fstp dword ptr [esp]
        movss xmm0, dword ptr [DAT_0028A938]
        comiss xmm0, dword ptr [esp]
        jc below_threshold
        mov al, 1
        pop ecx
        ret
    below_threshold:
        xor al, al
        pop ecx
        ret
    }
}
