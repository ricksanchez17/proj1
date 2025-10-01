cmd_drivers/perf/modules.order := {   cat drivers/perf/hisilicon/modules.order; :; } | awk '!x[$$0]++' - > drivers/perf/modules.order
