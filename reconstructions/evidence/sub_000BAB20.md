# sub_000BAB20 — lote 82

- Issue: [#8536](https://github.com/soldieg/ReBLACK-XBOX/issues/8536).
- REA/Ghidra 12.1.3 confirma corpo executável de 135 bytes (`0xBAB20–0xBABA6`) e `RET 4`.
- A extensão de 160 bytes do split/objeto inclui um NOP, uma tabela de salto de quatro destinos e oito bytes `INT3` após o corpo; a tabela é referenciada pelo salto indireto do `switch`.
- O span completo coincide entre REA, XBE, PE derivada, split e candidato. MSVC x86 compilou sem diagnósticos; seção compilada igual à candidata e sem relocações. ObjDiff 3.8.2: 100% no símbolo e na seção.
- A fonte emite o span do objeto para preservar também tabela e alinhamento; não afirma C semântico ou ABI formal. Link Xbox, diff pós-link, runtime e gameplay não foram verificados.
- Ordinal ainda não atribuído até reconciliação do roster do lote 82.
