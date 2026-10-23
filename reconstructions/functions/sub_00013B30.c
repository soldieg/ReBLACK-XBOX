__declspec(naked) void sub_00013B30(void)
{
    __asm {
        movss dword ptr [eax + 88h], xmm0
        movss xmm0, dword ptr [esp + 8h]
        movss dword ptr [eax + 8Ch], xmm0
        movss xmm0, dword ptr [esp + 4h]
        movss dword ptr [eax + 90h], xmm0
        movss xmm0, dword ptr [esp + 0Ch]
        mov byte ptr [eax + 0ABh], cl
        mov ecx, dword ptr [eax + 0A4h]
        movss dword ptr [eax + 94h], xmm0
        movss xmm0, dword ptr [esp + 10h]
        movss dword ptr [eax + 98h], xmm0
        movss xmm0, dword ptr [esp + 14h]
        or ecx, 800000h
        movss dword ptr [eax + 9Ch], xmm0
        mov dword ptr [eax + 0A4h], ecx
        ret 14h
    }
}
