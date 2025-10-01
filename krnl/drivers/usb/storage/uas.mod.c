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
	{ 0x308fa097, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe28425ea, "usb_register_driver" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xadf29008, "sdev_prefix_printk" },
	{ 0xfc1c309e, "usb_unlink_urb" },
	{ 0x34e0d31b, "scsi_unblock_requests" },
	{ 0x3bde320a, "scsi_block_requests" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x565387fb, "usb_lock_device_for_reset" },
	{ 0x7aa6e24e, "scsi_remove_host" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x91d5cae7, "usb_get_urb" },
	{ 0x62df24b3, "usb_kill_urb" },
	{ 0xd2613fce, "scsi_report_bus_reset" },
	{ 0xacd451f1, "_dev_printk" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0xc18ed430, "scsi_host_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3e622f54, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xac420c89, "scsi_host_alloc" },
	{ 0x57445697, "usb_stor_adjust_quirks" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc02a6afd, "usb_unanchor_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7b8e65b4, "usb_submit_urb" },
	{ 0xa0af9eee, "usb_anchor_urb" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0x2fa1931f, "usb_alloc_streams" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb1befefe, "usb_alloc_urb" },
	{ 0x3c48ee7f, "blk_queue_max_hw_sectors" },
	{ 0x9b2d9228, "blk_queue_update_dma_alignment" },
	{ 0xa2a35ed9, "scsi_change_queue_depth" },
	{ 0x8b4507b0, "scsi_is_host_device" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x59f9a8aa, "__dynamic_dev_dbg" },
	{ 0xda10699c, "scsi_scan_host" },
	{ 0xde448960, "usb_free_urb" },
	{ 0x4323cd13, "scsi_print_command" },
	{ 0x23821c98, "scmd_printk" },
	{ 0x5e6732c4, "usb_reset_device" },
	{ 0x35120c8d, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1eb8e940, "usb_free_streams" },
};

MODULE_INFO(depends, "usbcore,usb-storage,scsi_mod,scsi_common");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp1061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");
