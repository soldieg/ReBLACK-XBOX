__declspec(naked) void sub_00211300(void)
{
    __asm {
        cmp cl, 40h
        jnc L_zero
        cmp cl, 20h
        jnc L_high
        shld edx, eax, cl
        shl eax, cl
        ret
    L_high:
        mov edx, eax
        xor eax, eax
        and cl, 1fh
        shl edx, cl
        ret
    L_zero:
        xor eax, eax
        xor edx, edx
        ret
    }
}
