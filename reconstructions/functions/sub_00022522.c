__declspec(naked) void __cdecl sub_00022522(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        lea ecx, [eax + 1]
L22530:
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        jnz L22530
        sub eax, ecx
        mov word ptr [ebp - 8], ax
        mov eax, dword ptr [ebp - 8]
        inc eax
        mov word ptr [ebp - 6], ax
        lea ecx, [ebp - 8]
        mov eax, 1
        int 2Dh
        int 3
        leave
        ret 4
    }
}
