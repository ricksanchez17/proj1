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
	{ 0x2d3385d3, "system_wq" },
	{ 0xb49a37bc, "bus_register" },
	{ 0x249a6c58, "device_remove_file" },
	{ 0xd87943e2, "cdev_del" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x80a668e5, "cdev_init" },
	{ 0x6e1586e1, "driver_register" },
	{ 0x52e41417, "debugfs_create_dir" },
	{ 0x75c01042, "single_open" },
	{ 0x9c91112d, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x18819ea4, "single_release" },
	{ 0x99888dcc, "power_supply_unregister" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x625f87ac, "input_ff_event" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x59701cf7, "input_alloc_absinfo" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x99d6570d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1097b2a3, "device_destroy" },
	{ 0x23dbda0a, "power_supply_powers" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xa5dbbbc4, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8466fe36, "seq_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6d16c104, "mutex_lock_killable" },
	{ 0xe499c14b, "input_set_abs_params" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x41e42344, "bus_rescan_devices" },
	{ 0x6fc64ba5, "power_supply_changed" },
	{ 0xee1a371a, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x28e63ddf, "device_del" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x6c5c18c7, "power_supply_get_drvdata" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xa9f4b3fd, "driver_unregister" },
	{ 0xa4e2a8b6, "fasync_helper" },
	{ 0x5a921311, "strncmp" },
	{ 0x961c9e5c, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x8038358e, "noop_llseek" },
	{ 0xbac29eb7, "device_create" },
	{ 0xb156b654, "device_add" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0xb69dc615, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf5e7ea40, "ktime_get_coarse_ts64" },
	{ 0x416f2eb, "device_create_file" },
	{ 0xb792235f, "cdev_add" },
	{ 0x31fa99c7, "compat_ptr_ioctl" },
	{ 0xbc97c0f6, "_dev_info" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x81a63a5b, "bus_for_each_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0xbe22e7aa, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x29f9b459, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x818011be, "device_reprobe" },
	{ 0x92997ed8, "_printk" },
	{ 0x1f07aa2d, "input_free_device" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x59f9a8aa, "__dynamic_dev_dbg" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xb00602fc, "bus_for_each_drv" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x74375505, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x307ce092, "input_unregister_device" },
	{ 0x36358f0f, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0x8cac83d0, "class_destroy" },
	{ 0xa8a532fe, "kill_fasync" },
	{ 0xdb9e1829, "driver_attach" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb13a4b1d, "dev_set_name" },
	{ 0x916d9df3, "power_supply_register" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x640ecaf6, "__class_create" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x3e544633, "input_allocate_device" },
};

MODULE_INFO(depends, "");

