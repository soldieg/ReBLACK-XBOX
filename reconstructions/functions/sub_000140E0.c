__declspec(naked) void __cdecl sub_000140E0(void)
{
    __asm {
        test eax, eax
        mov dword ptr [ecx + 4f8h], eax
        jl short clear_value
        cmp eax, dword ptr [ecx + 4f4h]
        jl short done
    clear_value:
        mov dword ptr [ecx + 4f8h], 0
    done:
        ret
    }
}
