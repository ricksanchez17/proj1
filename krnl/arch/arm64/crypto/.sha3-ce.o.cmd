cmd_arch/arm64/crypto/sha3-ce.o := ld -EL  -maarch64elf -z noexecstack   -r -o arch/arm64/crypto/sha3-ce.o arch/arm64/crypto/sha3-ce-glue.o arch/arm64/crypto/sha3-ce-core.o
