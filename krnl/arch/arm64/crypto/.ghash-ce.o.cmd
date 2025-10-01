cmd_arch/arm64/crypto/ghash-ce.o := ld -EL  -maarch64elf -z noexecstack   -r -o arch/arm64/crypto/ghash-ce.o arch/arm64/crypto/ghash-ce-glue.o arch/arm64/crypto/ghash-ce-core.o
