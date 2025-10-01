cmd_drivers/scsi/scsi_mod.ko := ld -r -EL  -maarch64elf -z noexecstack --build-id=sha1  -T scripts/module.lds -o drivers/scsi/scsi_mod.ko drivers/scsi/scsi_mod.o drivers/scsi/scsi_mod.mod.o;  true
