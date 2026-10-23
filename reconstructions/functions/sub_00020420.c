__declspec(naked) void __cdecl sub_00020420(void)
{
    __asm {
        push ecx
        push esi
        push edi
        mov dword ptr [esp + 08h], ecx
        mov esi, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 08h]
        movaps xmm0, xmmword ptr [esi + 30h]
        movaps xmm1, xmmword ptr [esi + 20h]
        addps xmm1, xmm0
        movaps xmm2, xmmword ptr [esi]
        movaps xmm3, xmm2
        addps xmm2, xmm1
        addps xmm3, xmm0
        movaps xmmword ptr [edi], xmm0
        movaps xmmword ptr [edi + 10h], xmm1
        movaps xmmword ptr [edi + 20h], xmm2
        movaps xmmword ptr [edi + 30h], xmm3
        movaps xmm4, xmmword ptr [esi + 10h]
        addps xmm0, xmm4
        movaps xmmword ptr [edi + 40h], xmm0
        addps xmm1, xmm4
        movaps xmmword ptr [edi + 50h], xmm1
        addps xmm2, xmm4
        movaps xmmword ptr [edi + 60h], xmm2
        addps xmm3, xmm4
        movaps xmmword ptr [edi + 70h], xmm3
        pop edi
        pop esi
        pop ecx
        ret 4
    }
}
