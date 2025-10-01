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
	{ 0xd546c27f, "scsi_set_medium_removal" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xf983f8d2, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x9c91112d, "param_ops_int" },
	{ 0x89928ff, "cdrom_number_of_slots" },
	{ 0x51f08cf1, "blkdev_compat_ptr_ioctl" },
	{ 0x4d8ee1a5, "blk_put_request" },
	{ 0x8a12f1d5, "scsi_ioctl_block_when_processing_errors" },
	{ 0x62f046eb, "unregister_cdrom" },
	{ 0xada2227b, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0x51797b70, "scsi_free_sgtables" },
	{ 0x23821c98, "scmd_printk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa2d1a841, "cdrom_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40798448, "scsi_autopm_get_device" },
	{ 0xfa05c1ea, "scsi_alloc_sgtables" },
	{ 0xeaf2f9aa, "blk_rq_unmap_user" },
	{ 0x73b916dd, "__alloc_disk_node" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x16ca9031, "cdrom_release" },
	{ 0x8f726400, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x19e864e4, "__scsi_execute" },
	{ 0xa9f4b3fd, "driver_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0xadf29008, "sdev_prefix_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x150a072, "cdrom_get_media_event" },
	{ 0xdf407ca5, "set_capacity" },
	{ 0x52b156b8, "bdev_check_media_change" },
	{ 0xdee01c15, "blk_rq_map_user" },
	{ 0xd9594a0b, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x48233122, "cdrom_get_last_written" },
	{ 0xc95fc6fd, "scsi_device_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdfc68d6f, "blk_execute_rq" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaacc12c6, "scsi_ioctl" },
	{ 0x6fea4392, "put_disk" },
	{ 0xe8777fcc, "scsi_register_driver" },
	{ 0x9ed590d4, "scsi_block_when_processing_errors" },
	{ 0x1558aa69, "scsi_test_unit_ready" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x66770912, "cdrom_ioctl" },
	{ 0xe551da6e, "blk_pm_runtime_init" },
	{ 0x2d6b0e5, "register_cdrom" },
	{ 0xc9a24dcd, "device_add_disk" },
	{ 0x4eda88a0, "scsi_device_get" },
	{ 0xaf073237, "scsi_autopm_put_device" },
	{ 0xf27a5bdd, "blk_queue_logical_block_size" },
	{ 0xf14e2312, "blk_get_request" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x33785ee6, "scsi_mode_sense" },
};

MODULE_INFO(depends, "scsi_mod,scsi_common,cdrom");

