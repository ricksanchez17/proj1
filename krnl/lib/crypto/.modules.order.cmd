cmd_lib/crypto/modules.order := {   echo lib/crypto/libaes.ko; :; } | awk '!x[$$0]++' - > lib/crypto/modules.order
