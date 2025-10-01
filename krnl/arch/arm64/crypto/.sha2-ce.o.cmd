cmd_arch/arm64/crypto/sha2-ce.o := ld -EL  -maarch64elf -z noexecstack   -r -o arch/arm64/crypto/sha2-ce.o arch/arm64/crypto/sha2-ce-glue.o arch/arm64/crypto/sha2-ce-core.o
