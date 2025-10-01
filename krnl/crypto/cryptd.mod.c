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
	{ 0x334a0f5b, "crypto_alloc_skcipher" },
	{ 0x705222a4, "kmalloc_caches" },
	{ 0xb6e91523, "ahash_register_instance" },
	{ 0x925e9568, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x88c9a86c, "shash_ahash_digest" },
	{ 0x2a27379, "crypto_grab_skcipher" },
	{ 0x54ccd42e, "crypto_unregister_template" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x311884a8, "crypto_shash_final" },
	{ 0xc0fded42, "shash_ahash_finup" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x798d5821, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa535efc9, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x259e0f4b, "crypto_grab_shash" },
	{ 0xdcb764ad, "memset" },
	{ 0x3971fc0a, "crypto_grab_aead" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8fbdb07f, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e0a4ab4, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x99c73cb9, "crypto_drop_spawn" },
	{ 0xb2062a2, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x1082d484, "crypto_enqueue_request" },
	{ 0x969e596a, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xa5206f23, "crypto_destroy_tfm" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x7431440f, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x9745ec02, "crypto_skcipher_setkey" },
	{ 0x7934a3be, "crypto_aead_setauthsize" },
	{ 0xf36f277e, "crypto_alloc_aead" },
	{ 0xda349386, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0xfed46400, "shash_ahash_update" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5b8efeed, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2301f4d1, "aead_register_instance" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x330b86b0, "crypto_alloc_ahash" },
	{ 0xe4608ea4, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");

