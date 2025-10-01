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
	{ 0xef9a61aa, "usb_hcd_pci_pm_ops" },
	{ 0x3580e027, "usb_hcd_pci_shutdown" },
	{ 0x8eaba03b, "pci_unregister_driver" },
	{ 0xf9332d75, "__pci_register_driver" },
	{ 0x8b6c13ab, "xhci_init_driver" },
	{ 0x68c94c59, "pm_runtime_allow" },
	{ 0xf96ee7f7, "usb_add_hcd" },
	{ 0x6a57b2ba, "xhci_ext_cap_init" },
	{ 0xfc5c6e20, "usb_create_shared_hcd" },
	{ 0x4df38742, "usb_hcd_pci_probe" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x13585c76, "__devm_reset_control_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x6a8cfe8c, "is_acpi_device_node" },
	{ 0x59f9a8aa, "__dynamic_dev_dbg" },
	{ 0x9db1fad1, "pci_read_config_byte" },
	{ 0x72b719c3, "pci_set_mwi" },
	{ 0xe3012a21, "xhci_gen_setup" },
	{ 0x4c549b36, "__traceiter_xhci_dbg_quirks" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1efaa06f, "__tracepoint_xhci_dbg_quirks" },
	{ 0xaf4014ff, "usb_amd_quirk_pll_check" },
	{ 0x75f25d7, "xhci_dbg_trace" },
	{ 0x295e2064, "pci_match_id" },
	{ 0x7566b995, "pci_d3cold_disable" },
	{ 0xe81e8ea9, "xhci_suspend" },
	{ 0xa02d5024, "usb_enable_intel_xhci_ports" },
	{ 0x5871eb98, "xhci_resume" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x740b6706, "xhci_shutdown" },
	{ 0x6c0eb720, "pci_set_power_state" },
	{ 0xcafac1e0, "pm_runtime_forbid" },
	{ 0xe3511ee3, "usb_hcd_pci_remove" },
	{ 0x4665ea06, "usb_put_hcd" },
	{ 0xb078bc7c, "usb_remove_hcd" },
	{ 0x2dec79aa, "usb_hcd_is_primary_hcd" },
};

MODULE_INFO(depends, "usbcore,xhci-hcd");

MODULE_ALIAS("pci:v00001912d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc03i30*");
