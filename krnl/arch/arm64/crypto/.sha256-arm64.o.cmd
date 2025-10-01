cmd_arch/arm64/crypto/sha256-arm64.o := ld -EL  -maarch64elf -z noexecstack   -r -o arch/arm64/crypto/sha256-arm64.o arch/arm64/crypto/sha256-glue.o arch/arm64/crypto/sha256-core.o
