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
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9977c450, "kmem_cache_destroy" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xddaca6b3, "blk_req_zone_write_trylock" },
	{ 0xf983f8d2, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae90ea9, "t10_pi_type1_ip" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x51f08cf1, "blkdev_compat_ptr_ioctl" },
	{ 0x8a12f1d5, "scsi_ioctl_block_when_processing_errors" },
	{ 0x27075a29, "blk_mq_unfreeze_queue" },
	{ 0x723542ac, "blk_queue_io_min" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x762539a2, "scsi_mode_select" },
	{ 0x51797b70, "scsi_free_sgtables" },
	{ 0x23821c98, "scmd_printk" },
	{ 0x720a27a7, "__register_blkdev" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x64a501c8, "blk_mq_freeze_queue" },
	{ 0x7b503b65, "blk_queue_max_write_zeroes_sectors" },
	{ 0x6415da78, "blk_queue_alignment_offset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0x4323cd13, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40798448, "scsi_autopm_get_device" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0xfa05c1ea, "scsi_alloc_sgtables" },
	{ 0x73b916dd, "__alloc_disk_node" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdcb764ad, "memset" },
	{ 0xe2e2b0af, "blk_queue_set_zoned" },
	{ 0x815fda83, "sed_ioctl" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x28e63ddf, "device_del" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0x2bc3cafd, "blk_queue_zone_write_granularity" },
	{ 0x631a928e, "blk_queue_max_discard_sectors" },
	{ 0x8f726400, "del_gendisk" },
	{ 0xf5eec606, "class_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x19e864e4, "__scsi_execute" },
	{ 0xa9f4b3fd, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1fefc20, "scsi_report_opcode" },
	{ 0x5a921311, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0xadf29008, "sdev_prefix_printk" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x48a91171, "string_get_size" },
	{ 0xb156b654, "device_add" },
	{ 0x52b156b8, "bdev_check_media_change" },
	{ 0x2f7dca3, "blk_revalidate_disk_zones" },
	{ 0x82db3c9b, "__class_register" },
	{ 0xcaf2c603, "scsi_sd_pm_domain" },
	{ 0x90295dc9, "t10_pi_type3_ip" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xbc29b4c0, "t10_pi_type3_crc" },
	{ 0xc95fc6fd, "scsi_device_put" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x22dd29a9, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x352b1e6c, "blk_queue_flag_set" },
	{ 0x815af624, "blk_queue_max_zone_append_sectors" },
	{ 0xbe22e7aa, "put_device" },
	{ 0xe8f00f13, "blk_queue_physical_block_size" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaacc12c6, "scsi_ioctl" },
	{ 0x6fea4392, "put_disk" },
	{ 0xd74a8536, "__blk_req_zone_write_unlock" },
	{ 0x1953c958, "mempool_create" },
	{ 0xe8777fcc, "scsi_register_driver" },
	{ 0x3d9ee9f0, "clear_page" },
	{ 0x92997ed8, "_printk" },
	{ 0x9ed590d4, "scsi_block_when_processing_errors" },
	{ 0x1558aa69, "scsi_test_unit_ready" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x78ee0027, "scsi_device_set_state" },
	{ 0xf65a557d, "blk_queue_required_elevator_features" },
	{ 0xb3d2c76d, "scsi_hostbyte_string" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x2623e358, "scsi_command_normalize_sense" },
	{ 0x274cd5e0, "get_device" },
	{ 0x8cf33ea6, "kmem_cache_create" },
	{ 0x56349e47, "scsicam_bios_param" },
	{ 0xb9cbee45, "blk_queue_write_cache" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xf1e115cb, "t10_pi_type1_crc" },
	{ 0x36358f0f, "device_initialize" },
	{ 0xee3c4ff6, "scsi_get_vpd_page" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x15af7f4, "system_state" },
	{ 0xe551da6e, "blk_pm_runtime_init" },
	{ 0xce6b89ab, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc9a24dcd, "device_add_disk" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xb13a4b1d, "dev_set_name" },
	{ 0x4eda88a0, "scsi_device_get" },
	{ 0xaf073237, "scsi_autopm_put_device" },
	{ 0xf27a5bdd, "blk_queue_logical_block_size" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x33785ee6, "scsi_mode_sense" },
	{ 0xf70be586, "blk_queue_max_write_same_sectors" },
	{ 0x76066ce3, "blk_integrity_register" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x1e01e897, "scsi_print_sense_hdr" },
	{ 0xea92004b, "set_disk_ro" },
	{ 0x3a626118, "set_capacity_and_notify" },
};

MODULE_INFO(depends, "scsi_mod,t10-pi");

