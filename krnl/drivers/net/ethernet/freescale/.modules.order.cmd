cmd_drivers/net/ethernet/freescale/modules.order := {   cat drivers/net/ethernet/freescale/enetc/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/ethernet/freescale/modules.order
