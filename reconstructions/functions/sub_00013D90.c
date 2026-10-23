__declspec(naked) void sub_00013D90(void)
{
    __asm {
        imul eax, eax, 13Ch
        add eax, ecx
        mov cl, byte ptr [eax + 134h]
        test cl, cl
        jnz L_13DAF
        mov cl, byte ptr [eax + 135h]
        test cl, cl
        jnz L_13DAF
        xor eax, eax
        ret
        L_13DAF:
        mov eax, 1h
        ret
    }
}
