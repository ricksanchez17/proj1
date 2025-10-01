cmd_crypto/crypto_simd.o := ld -EL  -maarch64elf -z noexecstack   -r -o crypto/crypto_simd.o crypto/simd.o
