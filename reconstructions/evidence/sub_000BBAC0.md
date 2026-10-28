# sub_000BBAC0 — lote 82

- Issue: [#8539](https://github.com/soldieg/ReBLACK-XBOX/issues/8539).
- REA/Ghidra 12.1.3 confirmou 109 bytes de instruções no span candidato de 122 bytes; caller(s): sub_00143770; callees: nenhum; nenhuma chamada direta ficou pendente.
- REA, XBE, PE derivada, split e objeto candidato coincidem em todo o span.
- MSVC x86 compilou sem diagnósticos. ObjDiff 3.8.2 marcou símbolo e seção em 100%; comparação de seção confirmou igualdade integral e zero relocações.
- O código público é emissor de bytes preso ao endereço; não afirma C semântico ou ABI formal. Link Xbox, diff pós-link, runtime e gameplay não foram verificados.
- Ordinal ainda não atribuído enquanto o roster do lote 82 não for reconciliado.
