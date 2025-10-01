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
	{ 0x6a4a616c, "hid_add_device" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0xfa355613, "hid_quirks_init" },
	{ 0x98cf60b3, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc5f9cc9b, "hid_parse_report" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x62df24b3, "usb_kill_urb" },
	{ 0x19518cf4, "usb_deregister_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xda53e8bf, "input_ff_create" },
	{ 0x7e62fc50, "__hid_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x13fbd9d8, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0xd32d3a36, "_dev_notice" },
	{ 0xfc1c309e, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5495392, "hid_debug" },
	{ 0xca0487e4, "hid_input_report" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xebb9bced, "usb_block_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x393626f8, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x336cc960, "usb_string" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x308fa097, "usb_deregister" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x19d52f1f, "hid_quirks_exit" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x369cbb22, "hid_hw_close" },
	{ 0x7448eb6e, "usb_autopm_put_interface_async" },
	{ 0xffa55810, "usb_unpoison_urb" },
	{ 0xa4e2a8b6, "fasync_helper" },
	{ 0xb35e8c31, "hid_check_keys_pressed" },
	{ 0xaa1bd639, "usb_register_dev" },
	{ 0xe66f35a, "usb_control_msg" },
	{ 0x762b591f, "hid_hw_open" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6626afca, "down" },
	{ 0x8038358e, "noop_llseek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x50aeaf9d, "hid_set_field" },
	{ 0x8c70e1b6, "usb_free_coherent" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x800473f, "__cond_resched" },
	{ 0x31fa99c7, "compat_ptr_ioctl" },
	{ 0x119b06ac, "usb_queue_reset_device" },
	{ 0x22349583, "hid_alloc_report_buf" },
	{ 0xbc97c0f6, "_dev_info" },
	{ 0x7b8e65b4, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x7df92995, "usb_autopm_get_interface_async" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xef8fa9df, "usb_clear_halt" },
	{ 0x92997ed8, "_printk" },
	{ 0x9efdff5c, "usb_find_interface" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xab1849a8, "usb_interrupt_msg" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x76f4f832, "hid_destroy_device" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x59f9a8aa, "__dynamic_dev_dbg" },
	{ 0xe8aae75, "hid_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x76a2124f, "usb_autopm_get_interface_no_resume" },
	{ 0x310a761e, "usb_autopm_put_interface_no_suspend" },
	{ 0x6bb99bf9, "hidinput_count_leds" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x44c555a9, "param_array_ops" },
	{ 0xcf2a6966, "up" },
	{ 0xe28425ea, "usb_register_driver" },
	{ 0xa8a532fe, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8dd8b4c7, "usb_alloc_coherent" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5b8efeed, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xde448960, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe42e0ebc, "usb_autopm_put_interface" },
	{ 0x2c13e3fe, "device_set_wakeup_enable" },
	{ 0xb1befefe, "usb_alloc_urb" },
	{ 0xcb9aca14, "hid_lookup_quirk" },
	{ 0x7d96903, "hid_output_report" },
};

MODULE_INFO(depends, "hid,usbcore");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc*ip*in*");
