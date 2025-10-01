#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xe1dadf26, "module_layout" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa354925c, "vring_del_virtqueue" },
	{ 0xfaeff3b0, "vp_modern_set_queue_enable" },
	{ 0xe7c3e7ad, "pci_enable_sriov" },
	{ 0x5a7cc57, "pci_free_irq_vectors" },
	{ 0xd902648a, "pci_release_region" },
	{ 0x33214323, "vp_modern_get_num_queues" },
	{ 0x9db1fad1, "pci_read_config_byte" },
	{ 0x6bf2e11c, "pci_irq_get_affinity" },
	{ 0xea29abad, "dma_set_mask" },
	{ 0x4c0f3a2d, "pci_disable_device" },
	{ 0x149105a1, "pci_disable_sriov" },
	{ 0x802fad7d, "register_virtio_device" },
	{ 0x2ffc18cd, "param_ops_bool" },
	{ 0xb7fe8aa7, "virtqueue_get_used_addr" },
	{ 0x54be0799, "pci_find_next_capability" },
	{ 0x91e839db, "vp_modern_set_features" },
	{ 0x372c967a, "dma_set_coherent_mask" },
	{ 0xb7449259, "pci_set_master" },
	{ 0x4bf518d8, "virtio_break_device" },
	{ 0xee8ff071, "pci_alloc_irq_vectors_affinity" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x7ce51519, "pci_iounmap" },
	{ 0x34ca06ff, "vp_modern_generation" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa00560, "virtio_device_freeze" },
	{ 0xeda6f9ec, "vp_modern_queue_vector" },
	{ 0xf16b7ae4, "pci_device_is_present" },
	{ 0xf8ccffa5, "vp_modern_set_queue_size" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5067fe46, "virtqueue_get_desc_addr" },
	{ 0x782853e0, "unregister_virtio_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xbb1f66d6, "pci_find_capability" },
	{ 0x36267612, "vp_modern_probe" },
	{ 0x869a00d, "virtqueue_get_vring_size" },
	{ 0x69c3e994, "vp_modern_config_vector" },
	{ 0x9f4b93d9, "vp_modern_get_queue_enable" },
	{ 0x2f8a0089, "virtio_config_changed" },
	{ 0xbe22e7aa, "put_device" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0xc522290, "pci_read_config_dword" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xcab97876, "virtio_device_restore" },
	{ 0x68412272, "vp_modern_queue_address" },
	{ 0x8eaba03b, "pci_unregister_driver" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x274cd5e0, "get_device" },
	{ 0x8dc04a34, "pci_irq_vector" },
	{ 0x3a85b71c, "vp_modern_set_status" },
	{ 0x62ebf586, "vp_modern_get_features" },
	{ 0x37a0cba, "kfree" },
	{ 0x8288104d, "vring_create_virtqueue" },
	{ 0xf9332d75, "__pci_register_driver" },
	{ 0xfcdd9e18, "vp_modern_remove" },
	{ 0x77ec61bd, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfc0ff64, "vp_modern_get_queue_size" },
	{ 0x4a329091, "pci_iomap" },
	{ 0x26ecf349, "virtqueue_get_avail_addr" },
	{ 0x2028c41c, "vp_modern_map_vq_notify" },
	{ 0xfff69dec, "pci_enable_device" },
	{ 0xda979504, "vp_modern_get_status" },
	{ 0x28f26684, "irq_set_affinity_hint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf95e30d9, "pci_find_ext_capability" },
	{ 0x66806613, "vring_transport_features" },
	{ 0x245eee12, "pci_request_region" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "virtio_ring,virtio_pci_modern_dev,virtio");

MODULE_ALIAS("pci:v00001AF4d*sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "70E52C9C4FA18A579EC0A39");
