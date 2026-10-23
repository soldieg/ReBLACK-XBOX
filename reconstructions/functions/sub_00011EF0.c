extern void sub_00011C70(void);
extern void sub_00011E70(void);
extern float DAT_00295C74;
extern float DAT_002881A0;
extern float DAT_00288D84;

void __declspec(naked) sub_00011EF0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0FFFFFFF0h
        sub esp, 30h
        movaps xmm0, xmmword ptr [eax]
        movaps xmmword ptr [esp + 20h], xmm0
        movaps xmm0, xmmword ptr [ecx]
        lea eax, [esp + 20h]
        movaps xmmword ptr [esp + 10h], xmm0
        call sub_00011C70
        lea eax, [esp + 10h]
        call sub_00011C70
        lea eax, [esp + 10h]
        lea ecx, [esp + 20h]
        call sub_00011E70
        movaps xmm1, xmm0
        movss dword ptr [esp + 0Ch], xmm0
        mulss xmm1, xmm0
        movss xmm0, dword ptr [DAT_00295C74]
        subss xmm0, xmm1
        movss dword ptr [esp + 4], xmm0
        sqrtss xmm0, dword ptr [esp + 4]
        movss dword ptr [esp + 8], xmm0
        movss xmm0, dword ptr [esp + 8]
        movss dword ptr [esp + 8], xmm0
        fld dword ptr [esp + 0Ch]
        fld dword ptr [esp + 8]
        fpatan
        fstp dword ptr [esp + 4]
        movss xmm0, dword ptr [DAT_002881A0]
        subss xmm0, dword ptr [esp + 4]
        mulss xmm0, dword ptr [DAT_00288D84]
        mov esp, ebp
        pop ebp
        ret
    }
}
