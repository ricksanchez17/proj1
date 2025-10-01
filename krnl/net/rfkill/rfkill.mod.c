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
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9f04bb48, "led_trigger_event" },
	{ 0x181e0761, "stream_open" },
	{ 0x6ea5323f, "no_llseek" },
	{ 0x271ff9d, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x57ffbcb4, "input_unregister_handle" },
	{ 0xca5df76a, "led_trigger_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd1713c70, "input_register_handler" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1082edb3, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x77250d3c, "input_unregister_handler" },
	{ 0x28e63ddf, "device_del" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd2b38045, "input_close_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x52d5af32, "led_trigger_unregister" },
	{ 0xf5eec606, "class_unregister" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8371de8c, "input_open_device" },
	{ 0xb156b654, "device_add" },
	{ 0x82db3c9b, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x800473f, "__cond_resched" },
	{ 0x31fa99c7, "compat_ptr_ioctl" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbe22e7aa, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x7e1fbfec, "input_register_handle" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x36358f0f, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb13a4b1d, "dev_set_name" },
	{ 0x5b8efeed, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x40f3f56f, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

