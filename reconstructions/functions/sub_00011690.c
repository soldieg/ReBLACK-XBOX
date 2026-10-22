__declspec(naked) void __cdecl sub_00011690(void)
{
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 04h]
        movaps xmm0, xmmword ptr [ecx]
        movaps xmmword ptr [eax], xmm0
        movaps xmm0, xmmword ptr [ecx + 10h]
        movaps xmmword ptr [eax + 10h], xmm0
        movaps xmm0, xmmword ptr [ecx + 20h]
        movaps xmmword ptr [eax + 20h], xmm0
        movaps xmm0, xmmword ptr [ecx + 30h]
        movaps xmmword ptr [eax + 30h], xmm0
        ret 4
    }
}
