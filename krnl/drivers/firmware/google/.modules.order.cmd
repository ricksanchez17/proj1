cmd_drivers/firmware/google/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/firmware/google/modules.order
