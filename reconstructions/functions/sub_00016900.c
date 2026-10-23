__declspec(naked) void __cdecl sub_00016900(void)
{
    __asm {
        mov eax, dword ptr [ecx + 4]
        lea edx, [eax + 5ch]
        cmp ecx, edx
        jnz indexed
        add eax, 78h
        ret
    indexed:
        mov edx, dword ptr [eax + 3ch]
        mov ecx, dword ptr [ecx]
        mov ecx, dword ptr [edx + ecx * 4]
        mov edx, dword ptr [eax + 18h]
        lea ecx, [ecx + ecx * 4]
        lea eax, [edx + ecx * 4]
        ret
    }
}
