__declspec(naked) void __cdecl sub_00011850(void)
{
    __asm {
        push ecx
        movss xmm0, dword ptr [esp + 08h]
        maxss xmm0, dword ptr [esp + 0ch]
        minss xmm0, dword ptr [esp + 10h]
        movss dword ptr [esp], xmm0
        movss xmm0, dword ptr [esp]
        pop ecx
        ret
    }
}
