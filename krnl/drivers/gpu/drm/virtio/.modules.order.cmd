cmd_drivers/gpu/drm/virtio/modules.order := {   echo drivers/gpu/drm/virtio/virtio-gpu.ko; :; } | awk '!x[$$0]++' - > drivers/gpu/drm/virtio/modules.order
