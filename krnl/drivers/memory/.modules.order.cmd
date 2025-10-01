cmd_drivers/memory/modules.order := {   cat drivers/memory/tegra/modules.order; :; } | awk '!x[$$0]++' - > drivers/memory/modules.order
