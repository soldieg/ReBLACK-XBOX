__declspec(naked) unsigned char __cdecl sub_001126D0(void)
{
    __asm {
        xor ecx, ecx
    scan:
        mov al, byte ptr [ecx + edx]
        test al, al
        jz invalid
        cmp al, 2dh
        jz dash
        cmp ecx, 4
        jz invalid
        cmp ecx, 9
        jz invalid
        cmp ecx, 0eh
        jz invalid
    dash:
        cmp ecx, 4
        jz accepted
        cmp ecx, 9
        jz accepted
        cmp ecx, 0eh
        jz accepted
        cmp al, 41h
        jl lowercase
        cmp al, 5ah
        jle accepted
    lowercase:
        cmp al, 61h
        jl digit
        cmp al, 7ah
        jle accepted
    digit:
        cmp al, 30h
        jl invalid
        cmp al, 39h
        jg invalid
    accepted:
        inc ecx
        cmp ecx, 13h
        jl scan
        mov al, 1
        ret
    invalid:
        xor al, al
        ret
    }
}
