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
	{ 0x6ea5323f, "no_llseek" },
	{ 0x77250d3c, "input_unregister_handler" },
	{ 0xd1713c70, "input_register_handler" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x800473f, "__cond_resched" },
	{ 0x8371de8c, "input_open_device" },
	{ 0x181e0761, "stream_open" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x92997ed8, "_printk" },
	{ 0xd10a1fb4, "cdev_device_add" },
	{ 0x80a668e5, "cdev_init" },
	{ 0x7e1fbfec, "input_register_handle" },
	{ 0x36358f0f, "device_initialize" },
	{ 0x26377671, "input_class" },
	{ 0x274cd5e0, "get_device" },
	{ 0xb13a4b1d, "dev_set_name" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0x57ffbcb4, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x44a3bd00, "cdev_device_del" },
	{ 0xd2b38045, "input_close_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0xa8a532fe, "kill_fasync" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x59f9a8aa, "__dynamic_dev_dbg" },
	{ 0x65ca5e98, "input_match_device_id" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xbe22e7aa, "put_device" },
	{ 0xa4e2a8b6, "fasync_helper" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");
