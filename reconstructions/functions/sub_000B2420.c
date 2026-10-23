/* In-place ASCII lowercase-to-uppercase conversion; exact x86 body from REA. */
__declspec(naked) void sub_000B2420(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp byte ptr [eax], 0
        mov edx, eax
        jz L_done
    L_loop:
        mov cl, byte ptr [edx]
        cmp cl, 61h
        jl L_next
        cmp cl, 7Ah
        jg L_next
        sub cl, 20h
        mov byte ptr [edx], cl
    L_next:
        inc edx
        cmp byte ptr [edx], 0
        jnz L_loop
    L_done:
        ret
    }
}
