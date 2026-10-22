__declspec(naked) void __cdecl sub_00014240(void)
{
    __asm {
        lea edx, [esi + 3820h]
        sub edx, eax
    copy_string:
        mov cl, byte ptr [eax]
        mov byte ptr [edx + eax], cl
        inc eax
        test cl, cl
        jnz copy_string
        mov al, byte ptr [esi + 3840h]
        test al, al
        mov eax, 1
        jnz set_flag_b
        mov dword ptr [esi + 388ch], eax
        ret
    set_flag_b:
        mov dword ptr [esi + 3884h], eax
        ret
    }
}