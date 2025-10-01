cmd_drivers/scsi/sd_mod.o := ld -EL  -maarch64elf -z noexecstack   -r -o drivers/scsi/sd_mod.o drivers/scsi/sd.o drivers/scsi/sd_dif.o drivers/scsi/sd_zbc.o
