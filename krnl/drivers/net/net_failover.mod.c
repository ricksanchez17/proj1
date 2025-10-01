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
	{ 0x6b939a03, "dev_mc_sync_multiple" },
	{ 0x34327463, "netdev_info" },
	{ 0xcb7dd998, "pci_bus_type" },
	{ 0x8188d698, "dev_mc_unsync" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x65f83ee0, "netif_carrier_on" },
	{ 0x75742eee, "netif_carrier_off" },
	{ 0x1796acd9, "call_netdevice_notifiers" },
	{ 0x5cc7856c, "__dev_kfree_skb_any" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x90c23387, "failover_register" },
	{ 0x843cdddc, "netdev_lower_state_changed" },
	{ 0x430828ee, "netdev_change_features" },
	{ 0xcb473c05, "netif_tx_wake_queue" },
	{ 0xa2d303cc, "netif_tx_stop_all_queues" },
	{ 0x1ec62113, "__ethtool_get_link_ksettings" },
	{ 0x1d4cf2fd, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2e61b799, "free_netdev" },
	{ 0xe26441c0, "register_netdev" },
	{ 0x62426532, "dev_close" },
	{ 0xa3ff52a5, "_dev_err" },
	{ 0x68b2a740, "dev_open" },
	{ 0x2d7add5d, "netdev_pick_tx" },
	{ 0xea53938b, "netif_device_detach" },
	{ 0x9c1e5bf5, "queued_spin_lock_slowpath" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x585f8d4b, "passthru_features_check" },
	{ 0x5e2d7875, "cpu_hwcap_keys" },
	{ 0xccc5d777, "netdev_err" },
	{ 0x365bab4, "dev_uc_unsync" },
	{ 0xd6dbd573, "unregister_netdevice_queue" },
	{ 0xbfaf1976, "eth_validate_addr" },
	{ 0x8bac7b14, "dev_uc_sync_multiple" },
	{ 0x4829a47e, "memcpy" },
	{ 0x85aa1788, "failover_slave_unregister" },
	{ 0xe4054dee, "unregister_netdev" },
	{ 0xbc3c4c49, "failover_unregister" },
	{ 0xeba5e311, "dev_queue_xmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x6aa86440, "dev_get_stats" },
	{ 0x425c6dfd, "dev_set_mtu" },
	{ 0xbc92a26, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "failover");

