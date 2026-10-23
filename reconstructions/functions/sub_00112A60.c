__declspec(naked) void __cdecl sub_00112A60(void)
{
    __asm {
        sub esp, 10h
        xorps xmm0, xmm0
        push esi
        push edi
        movss dword ptr [esp + 8], xmm0
        mov edi, dword ptr [esp + 8]
        xor ecx, ecx
        mov esi, eax
        mov dword ptr [esi], edi
        mov dword ptr [esi + 4], ecx
        mov edx, ecx
        mov dword ptr [esi + 8], edx
        pop edi
        mov dword ptr [esi + 0ch], ecx
        pop esi
        add esp, 10h
        ret
    }
}
