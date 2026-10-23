__declspec(naked) void sub_00013AF0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8h]
        mov dword ptr [eax + 50h], ecx
        movaps xmm0, xmmword ptr [edx]
        mov ecx, dword ptr [ebp + 0Ch]
        mov dl, byte ptr [ebp + 14h]
        movaps xmmword ptr [eax + 30h], xmm0
        movaps xmm0, xmmword ptr [ecx]
        movaps xmmword ptr [eax + 40h], xmm0
        movss xmm0, dword ptr [ebp + 10h]
        and esp, 0FFFFFFF0h
        movss dword ptr [eax + 54h], xmm0
        mov byte ptr [eax + 0A8h], dl
        mov dword ptr [eax + 0A4h], 80Fh
        mov esp, ebp
        pop ebp
        ret 10h
    }
}
