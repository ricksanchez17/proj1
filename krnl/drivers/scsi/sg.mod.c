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
	{ 0x9c91112d, "param_ops_int" },
	{ 0x31fa99c7, "compat_ptr_ioctl" },
	{ 0x6ea5323f, "no_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x6e51e4c0, "class_interface_unregister" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8cac83d0, "class_destroy" },
	{ 0x44faca52, "scsi_register_interface" },
	{ 0x640ecaf6, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x349dd10d, "blk_trace_startstop" },
	{ 0xe06f7a51, "blk_trace_setup" },
	{ 0xc4b79fa6, "blk_trace_remove" },
	{ 0xaacc12c6, "scsi_ioctl" },
	{ 0x8a12f1d5, "scsi_ioctl_block_when_processing_errors" },
	{ 0xf53bd744, "__module_get" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x800473f, "__cond_resched" },
	{ 0x40798448, "scsi_autopm_get_device" },
	{ 0x4eda88a0, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x1becfe4b, "nonseekable_open" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9ed590d4, "scsi_block_when_processing_errors" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xc1d5d504, "scsi_cmd_allowed" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1de4ccb2, "get_sg_io_hdr" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdcb764ad, "memset" },
	{ 0x1097b2a3, "device_destroy" },
	{ 0x99a5531f, "sysfs_remove_link" },
	{ 0xd87943e2, "cdev_del" },
	{ 0x6922a4a9, "sysfs_create_link" },
	{ 0xbac29eb7, "device_create" },
	{ 0xb792235f, "cdev_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0x75d56fc, "cdev_alloc" },
	{ 0x2d06ac37, "__scsi_print_sense" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xa8a532fe, "kill_fasync" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x5ec4aee6, "put_sg_io_hdr" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9297339e, "blk_rq_map_user_iov" },
	{ 0x4be9b55d, "import_iovec" },
	{ 0xc5ffa98d, "blk_execute_rq_nowait" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdee01c15, "blk_rq_map_user" },
	{ 0x4829a47e, "memcpy" },
	{ 0xf14e2312, "blk_get_request" },
	{ 0x617c452b, "queued_read_lock_slowpath" },
	{ 0x15a1dcc0, "module_put" },
	{ 0xc95fc6fd, "scsi_device_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xaf073237, "scsi_autopm_put_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc528a49a, "queued_write_lock_slowpath" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x2a698fb7, "alloc_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92997ed8, "_printk" },
	{ 0x30acae76, "__task_pid_nr_ns" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4d8ee1a5, "blk_put_request" },
	{ 0xeaf2f9aa, "blk_rq_unmap_user" },
	{ 0x37a0cba, "kfree" },
	{ 0x66bba4a8, "__free_pages" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xadf29008, "sdev_prefix_printk" },
	{ 0xa4e2a8b6, "fasync_helper" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
};

MODULE_INFO(depends, "scsi_mod,scsi_common");


MODULE_INFO(srcversion, "3ADD431E649BB09777D669C");
