cmd_drivers/firmware/efi/modules.order := {   echo drivers/firmware/efi/efi-pstore.ko; :; } | awk '!x[$$0]++' - > drivers/firmware/efi/modules.order
