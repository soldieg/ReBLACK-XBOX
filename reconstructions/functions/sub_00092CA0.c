__declspec(naked) void __cdecl sub_00092CA0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        movaps xmm0, xmmword ptr [eax]
        movaps xmm1, xmmword ptr [ecx]
        mov edx, dword ptr [ebp + 10h]
        subps xmm1, xmm0
        and esp, 0fffffff0h
        movaps xmmword ptr [edx], xmm1
        mov esp, ebp
        pop ebp
        ret
    }
}
