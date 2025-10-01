cmd_arch/arm64/crypto/aes-arm64.o := ld -EL  -maarch64elf -z noexecstack   -r -o arch/arm64/crypto/aes-arm64.o arch/arm64/crypto/aes-cipher-core.o arch/arm64/crypto/aes-cipher-glue.o
