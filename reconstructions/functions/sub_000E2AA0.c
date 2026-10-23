__declspec(naked) void __cdecl sub_000E2AA0(void)
{
    __asm {
        mov dx, word ptr [esp + 4]
        mov word ptr [eax + 18h], dx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 14h], edx
        mov edx, dword ptr [esp + 8]
        mov dword ptr [eax], edx
        mov dx, word ptr [ecx + 38h]
        mov word ptr [eax + 1ah], dx
        test byte ptr [ecx + 4], 4
        jz short no_first
        lea edx, [ecx + 10h]
        mov dword ptr [eax + 4], edx
        jmp short check_second
    no_first:
        mov dword ptr [eax + 4], 0
    check_second:
        test byte ptr [ecx + 4], 8
        jz short no_second
        lea edx, [ecx + 28h]
        jmp short save_second
    no_second:
        xor edx, edx
    save_second:
        mov dword ptr [eax + 8], edx
        mov dl, byte ptr [ecx + 4]
        test dl, dl
        jns short no_signed
        mov edx, dword ptr [ecx + 3ch]
        jmp short save_signed
    no_signed:
        xor edx, edx
    save_signed:
        mov dword ptr [eax + 0ch], edx
        test byte ptr [ecx + 4], 10h
        jz short no_float
        movss xmm0, dword ptr [ecx + 30h]
        movss dword ptr [eax + 10h], xmm0
        ret 8
    no_float:
        xorps xmm0, xmm0
        movss dword ptr [eax + 10h], xmm0
        ret 8
    }
}
