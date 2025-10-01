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
	{ 0x9db1fad1, "pci_read_config_byte" },
	{ 0xea29abad, "dma_set_mask" },
	{ 0x54be0799, "pci_find_next_capability" },
	{ 0x372c967a, "dma_set_coherent_mask" },
	{ 0x70e1e8e, "_dev_warn" },
	{ 0x7ce51519, "pci_iounmap" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x61680f59, "pci_iomap_range" },
	{ 0xbb1f66d6, "pci_find_capability" },
	{ 0xbc97c0f6, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc522290, "pci_read_config_dword" },
	{ 0xd4627290, "pci_release_selected_regions" },
	{ 0xba6c390d, "pci_request_selected_regions" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1F27447B336B716B1B7429F");
