__declspec(naked) void __cdecl sub_00112940(void)
{
    // `_emit` keeps absolute loads at the observed no-segment-prefix encoding.
    __asm {
        _emit 8bh
        _emit 0dh
        _emit 40h
        _emit 44h
        _emit 2fh
        _emit 00h
        _emit 0f3h
        _emit 0fh
        _emit 10h
        _emit 05h
        _emit 74h
        _emit 5ch
        _emit 29h
        _emit 00h
        mov dword ptr [eax + 20h], ecx
        _emit 8bh
        _emit 15h
        _emit 44h
        _emit 44h
        _emit 2fh
        _emit 00h
        push esi
        mov dword ptr [eax + 24h], edx
        _emit 8bh
        _emit 15h
        _emit 40h
        _emit 44h
        _emit 2fh
        _emit 00h
        lea ecx, [eax + 18h]
        push edi
        _emit 8bh
        _emit 3dh
        _emit 74h
        _emit 0afh
        _emit 28h
        _emit 00h
        mov dword ptr [ecx], edx
        _emit 8bh
        _emit 15h
        _emit 44h
        _emit 44h
        _emit 2fh
        _emit 00h
        lea esi, [eax + 8]
        mov dword ptr [esi], edi
        mov dword ptr [ecx + 4], edx
        xor edx, edx
        mov dword ptr [eax + 30h], edi
        pop edi
        mov dword ptr [eax], esi
        mov dword ptr [eax + 28h], edx
        mov dword ptr [eax + 2ch], edx
        mov dword ptr [eax + 34h], edx
        movss dword ptr [eax + 38h], xmm0
        mov word ptr [eax + 3ch], dx
        mov byte ptr [eax + 3eh], dl
        mov dword ptr [eax + 0ch], 2
        mov dword ptr [eax + 10h], ecx
        mov word ptr [eax + 4], 1
        mov dword ptr [eax + 40h], edx
        mov dword ptr [eax + 44h], edx
        mov dword ptr [eax + 48h], edx
        pop esi
        ret
    }
}
