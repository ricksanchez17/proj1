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
	{ 0x15ba50a6, "jiffies" },
	{ 0xee4778dd, "i2c_add_adapter" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0xd9071ab8, "i2c_add_numbered_adapter" },
	{ 0x92997ed8, "_printk" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x760a0f4f, "yield" },
};

MODULE_INFO(depends, "");

