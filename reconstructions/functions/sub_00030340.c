/*
 * Normalized source-level model of sub_00030340.
 * XBE SHA-256: DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6
 * Split SHA-256: C8D6802152CFAE20623CDD92CC0E88DC49DF6CEC09C14525B2B03A107B8DBA22
 * Original range: 0x00030340-0x00030345 (5 bytes, one near JMP).
 * The XBE is a tail-jump thunk, not a CALL/RET wrapper.
 */
extern void sub_00030150(void);

void sub_00030340(void)
{
    sub_00030150(); /* source-level model of JMP 0x30150 */
}
