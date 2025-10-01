cmd_drivers/virt/vboxguest/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/virt/vboxguest/modules.order
