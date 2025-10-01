cmd_drivers/bus/modules.order := {   cat drivers/bus/fsl-mc/modules.order; :; } | awk '!x[$$0]++' - > drivers/bus/modules.order
