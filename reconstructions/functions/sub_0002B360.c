__declspec(naked) unsigned int __cdecl sub_0002B360(void)
{
    __asm {
        add eax, -3
        cmp eax, 1bh
        ja invalid
        movzx eax, byte ptr [eax + 02b394h]
        jmp dword ptr [eax * 4 + 02b388h]
    case_twenty:
        mov eax, 20h
        ret
    case_sixteen:
        mov eax, 10h
        ret
    invalid:
        xor eax, eax
        ret
    }
}
