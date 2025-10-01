cmd_drivers/block/modules.order := {   echo drivers/block/virtio_blk.ko; :; } | awk '!x[$$0]++' - > drivers/block/modules.order
