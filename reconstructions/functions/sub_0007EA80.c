/* Byte-level x86 reconstruction backed by fresh REA instruction decode and XBE/PE/split cross-check.
 * Semantic C is preserved separately; rel32 calls pin the original XBE layout. */
__declspec(naked) unsigned int __cdecl sub_0007EA80(void) { __asm {
 /* 0007EA80: push ebx */
 __emit 0x53
 /* 0007EA81: push esi */
 __emit 0x56
 /* 0007EA82: mov esi, dword ptr [esp + 0xc] */
 __emit 0x8B
 __emit 0x74
 __emit 0x24
 __emit 0x0C
 /* 0007EA86: push edi */
 __emit 0x57
 /* 0007EA87: push esi */
 __emit 0x56
 /* 0007EA88: call 0x7e4e0   -> sub_0007E4E0 */
 __emit 0xE8
 __emit 0x53
 __emit 0xFA
 __emit 0xFF
 __emit 0xFF
 /* 0007EA8D: push esi */
 __emit 0x56
 /* 0007EA8E: mov ebx, eax */
 __emit 0x8B
 __emit 0xD8
 /* 0007EA90: call 0x7e0e0   -> sub_0007E0E0 */
 __emit 0xE8
 __emit 0x4B
 __emit 0xF6
 __emit 0xFF
 __emit 0xFF
 /* 0007EA95: mov edi, eax */
 __emit 0x8B
 __emit 0xF8
 /* 0007EA97: mov eax, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x46
 __emit 0x04
 /* 0007EA9A: push 0x286180 */
 __emit 0x68
 __emit 0x80
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007EA9F: push eax */
 __emit 0x50
 /* 0007EAA0: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xCB
 __emit 0x6F
 __emit 0x00
 __emit 0x00
 /* 0007EAA5: add esp, 0x10 */
 __emit 0x83
 __emit 0xC4
 __emit 0x10
 /* 0007EAA8: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007EAAA: je 0x7eac1 */
 __emit 0x74
 __emit 0x15
 /* 0007EAAC: mov ecx, dword ptr [esi + 4] */
 __emit 0x8B
 __emit 0x4E
 __emit 0x04
 /* 0007EAAF: push 0x2861e0 */
 __emit 0x68
 __emit 0xE0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007EAB4: push ecx */
 __emit 0x51
 /* 0007EAB5: call 0x85a70   -> sub_00085A70 */
 __emit 0xE8
 __emit 0xB6
 __emit 0x6F
 __emit 0x00
 __emit 0x00
 /* 0007EABA: add esp, 8 */
 __emit 0x83
 __emit 0xC4
 __emit 0x08
 /* 0007EABD: test eax, eax */
 __emit 0x85
 __emit 0xC0
 /* 0007EABF: jne 0x7eafa */
 __emit 0x75
 __emit 0x39
 /* 0007EAC1: cmp byte ptr [esi + 0xd], 2 */
 __emit 0x80
 __emit 0x7E
 __emit 0x0D
 __emit 0x02
 /* 0007EAC5: jne 0x7eafa */
 __emit 0x75
 __emit 0x33
 /* 0007EAC7: mov edx, dword ptr [esp + 0x14] */
 __emit 0x8B
 __emit 0x54
 __emit 0x24
 __emit 0x14
 /* 0007EACB: fild dword ptr [esp + 0x14] */
 __emit 0xDB
 __emit 0x44
 __emit 0x24
 __emit 0x14
 /* 0007EACF: test edx, edx */
 __emit 0x85
 __emit 0xD2
 /* 0007EAD1: jge 0x7ead9 */
 __emit 0x7D
 __emit 0x06
 /* 0007EAD3: fadd dword ptr [0x295c90] */
 __emit 0xD8
 __emit 0x05
 __emit 0x90
 __emit 0x5C
 __emit 0x29
 __emit 0x00
 /* 0007EAD9: test edi, edi */
 __emit 0x85
 __emit 0xFF
 /* 0007EADB: mov dword ptr [esp + 0x10], edi */
 __emit 0x89
 __emit 0x7C
 __emit 0x24
 __emit 0x10
 /* 0007EADF: fild dword ptr [esp + 0x10] */
 __emit 0xDB
 __emit 0x44
 __emit 0x24
 __emit 0x10
 /* 0007EAE3: jge 0x7eaeb */
 __emit 0x7D
 __emit 0x06
 /* 0007EAE5: fadd dword ptr [0x295c90] */
 __emit 0xD8
 __emit 0x05
 __emit 0x90
 __emit 0x5C
 __emit 0x29
 __emit 0x00
 /* 0007EAEB: fdivp st(1) */
 __emit 0xDE
 __emit 0xF9
 /* 0007EAED: fmul dword ptr [0x2861f0] */
 __emit 0xD8
 __emit 0x0D
 __emit 0xF0
 __emit 0x61
 __emit 0x28
 __emit 0x00
 /* 0007EAF3: call 0xa34d4   -> sub_000A34D4 */
 __emit 0xE8
 __emit 0xDC
 __emit 0x49
 __emit 0x02
 __emit 0x00
 /* 0007EAF8: jmp 0x7eb05 */
 __emit 0xEB
 __emit 0x0B
 /* 0007EAFA: mov eax, dword ptr [esp + 0x14] */
 __emit 0x8B
 __emit 0x44
 __emit 0x24
 __emit 0x14
 /* 0007EAFE: xor edx, edx */
 __emit 0x33
 __emit 0xD2
 /* 0007EB00: div edi */
 __emit 0xF7
 __emit 0xF7
 /* 0007EB02: imul eax, ebx */
 __emit 0x0F
 __emit 0xAF
 __emit 0xC3
 /* 0007EB05: test byte ptr [esi + 0x18], 4 */
 __emit 0xF6
 __emit 0x46
 __emit 0x18
 __emit 0x04
 /* 0007EB09: mov ecx, 1 */
 __emit 0xB9
 __emit 0x01
 __emit 0x00
 __emit 0x00
 __emit 0x00
 /* 0007EB0E: jne 0x7eb14 */
 __emit 0x75
 __emit 0x04
 /* 0007EB10: movzx ecx, byte ptr [esi + 0xd] */
 __emit 0x0F
 __emit 0xB6
 __emit 0x4E
 __emit 0x0D
 /* 0007EB14: pop edi */
 __emit 0x5F
 /* 0007EB15: xor edx, edx */
 __emit 0x33
 __emit 0xD2
 /* 0007EB17: pop esi */
 __emit 0x5E
 /* 0007EB18: div ecx */
 __emit 0xF7
 __emit 0xF1
 /* 0007EB1A: pop ebx */
 __emit 0x5B
 /* 0007EB1B: ret */
 __emit 0xC3
 } }
