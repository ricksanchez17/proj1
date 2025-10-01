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
	{ 0x18819ea4, "single_release" },
	{ 0x8466fe36, "seq_read" },
	{ 0x74375505, "seq_lseek" },
	{ 0x6ea5323f, "no_llseek" },
	{ 0x8cac83d0, "class_destroy" },
	{ 0x49c1808a, "unregister_virtio_driver" },
	{ 0xc3bb3c7a, "register_virtio_driver" },
	{ 0x52e41417, "debugfs_create_dir" },
	{ 0x92997ed8, "_printk" },
	{ 0x640ecaf6, "__class_create" },
	{ 0x2dcb0160, "hvc_instantiate" },
	{ 0x271ff9d, "kobject_uevent" },
	{ 0x603037d7, "sysfs_create_group" },
	{ 0x9166fada, "strncpy" },
	{ 0x59f9a8aa, "__dynamic_dev_dbg" },
	{ 0xa6257a2f, "complete" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe4c0c3d3, "pipe_unlock" },
	{ 0x1ed8f6fe, "__splice_from_pipe" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb19a4462, "pipe_lock" },
	{ 0x1becfe4b, "nonseekable_open" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x725a7e58, "__register_chrdev" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x4bf518d8, "virtio_break_device" },
	{ 0x961c9e5c, "debugfs_remove" },
	{ 0x705a15f6, "sysfs_remove_group" },
	{ 0x28373499, "hvc_remove" },
	{ 0x9833bc0c, "hvc_kick" },
	{ 0xa8a532fe, "kill_fasync" },
	{ 0x1d6ea68a, "hvc_poll" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd87943e2, "cdev_del" },
	{ 0x1097b2a3, "device_destroy" },
	{ 0xa5dbbbc4, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbac29eb7, "device_create" },
	{ 0xb792235f, "cdev_add" },
	{ 0x75d56fc, "cdev_alloc" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa7d69858, "freezing_slow_path" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x800473f, "__cond_resched" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa35a9d2f, "__hvc_resize" },
	{ 0x66b3d1dc, "virtio_check_driver_offered_feature" },
	{ 0x48cfa21d, "virtqueue_disable_cb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xefe3e196, "hvc_alloc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5863abd6, "virtqueue_is_broken" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x32daa1a1, "virtqueue_add_outbuf" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0xa526e8a9, "virtqueue_kick" },
	{ 0xb81dae1a, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaec8023b, "virtqueue_detach_unused_buf" },
	{ 0x9df1f687, "virtqueue_get_buf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbff1ab3b, "__put_page" },
	{ 0x83ba077f, "unlock_page" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2a698fb7, "alloc_pages" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa4e2a8b6, "fasync_helper" },
	{ 0x99d6570d, "seq_printf" },
	{ 0x75c01042, "single_open" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "virtio,virtio_ring");

MODULE_ALIAS("virtio:d00000003v*");
