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
	{ 0x460c70a6, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf00942fa, "phy_disconnect" },
	{ 0x7ad51312, "ptp_schedule_worker" },
	{ 0x41efd7dc, "phy_stop" },
	{ 0xd17c8ecb, "napi_disable" },
	{ 0x91929663, "napi_schedule_prep" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0x980f9261, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4c7919c8, "pci_disable_msix" },
	{ 0x2d1223db, "__mdiobus_register" },
	{ 0x6862700a, "of_phy_get_and_connect" },
	{ 0x34e8a279, "phy_ethtool_get_wol" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x61ae4cf, "phy_support_asym_pause" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0x68efca98, "mdiobus_unregister" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3e4cd7e5, "devm_mdiobus_alloc_size" },
	{ 0xc0faf836, "phy_ethtool_get_eee" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x86476470, "phy_start_aneg" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x2f070e62, "ptp_clock_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x693e69c0, "phy_print_status" },
	{ 0xe5eb0c5b, "pci_set_master" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xa79cdfa6, "phy_remove_link_mode" },
	{ 0x438e8557, "dma_sync_single_for_cpu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xeb824649, "phy_start" },
	{ 0xfb35846c, "phy_find_first" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xa0c144bc, "napi_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4f66332e, "__dev_kfree_skb_irq" },
	{ 0x3a89a4be, "netif_napi_add" },
	{ 0x3f38db8b, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcc5868f1, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe47c2ee5, "devm_alloc_etherdev_mqs" },
	{ 0xb0621568, "phy_init_eee" },
	{ 0x2dccf961, "phy_ethtool_get_link_ksettings" },
	{ 0xf800f01b, "pci_select_bars" },
	{ 0xaa71940d, "of_get_mac_address" },
	{ 0xe36fb66, "napi_gro_receive" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x8fe62070, "pci_enable_msix_range" },
	{ 0x13052359, "eth_prepare_mac_addr_change" },
	{ 0xb1022be5, "__napi_schedule" },
	{ 0xc6154185, "phy_connect_direct" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x6029663b, "napi_complete_done" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe4e61ec6, "ptp_find_pin" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x91ee43e3, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc00689ca, "__netif_napi_del" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x97e43ed2, "phy_ethtool_set_wol" },
	{ 0x58ba63fd, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x23e57e94, "phy_attached_info" },
	{ 0x8ce85d3b, "ptp_clock_index" },
	{ 0x9bf9b636, "pci_disable_msi" },
	{ 0xc06d3edc, "devm_ioremap" },
	{ 0x164bf20a, "phy_ethtool_set_eee" },
	{ 0xe776c4a6, "__pci_register_driver" },
	{ 0x73534824, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xcbf21e4b, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xa35303d4, "pci_enable_device_mem" },
	{ 0x853ef3c3, "skb_tstamp_tx" },
	{ 0xe22d1723, "skb_put" },
	{ 0xe8aa109c, "pci_release_selected_regions" },
	{ 0xeac7a20c, "pci_request_selected_regions" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1d186b59, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001055d00007430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d00007431sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D8C9B88DAA0C3A108F4D3D");
