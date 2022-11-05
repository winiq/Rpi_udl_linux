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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc0f38e3d, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0xf00942fa, "phy_disconnect" },
	{ 0x1b673a2e, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb72da741, "pcim_enable_device" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x1c27b1c4, "phy_do_ioctl_running" },
	{ 0x41efd7dc, "phy_stop" },
	{ 0xd17c8ecb, "napi_disable" },
	{ 0x6987d6f1, "napi_consume_skb" },
	{ 0x91929663, "napi_schedule_prep" },
	{ 0xe5831106, "pcim_iomap_table" },
	{ 0x73053428, "dev_err_probe" },
	{ 0xe9f8e049, "phy_resume" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0x92141602, "__devm_mdiobus_register" },
	{ 0x9f9d1817, "pcie_set_readrq" },
	{ 0xf7d65317, "phy_init_hw" },
	{ 0xd9eb1221, "phy_read_mmd" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xd8ffcdff, "phy_ethtool_nway_reset" },
	{ 0xcaddbbe6, "mdiobus_get_phy" },
	{ 0xc23b3b9c, "phy_write_paged" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x49bda11b, "phy_select_page" },
	{ 0xf0986695, "mdiobus_write" },
	{ 0x189876ed, "phy_get_pause" },
	{ 0xb6d75810, "pci_write_config_byte" },
	{ 0x61ae4cf, "phy_support_asym_pause" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbf2b5ff7, "pcie_capability_clear_and_set_word" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xdd64e639, "strscpy" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0x3e4cd7e5, "devm_mdiobus_alloc_size" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xc0faf836, "phy_ethtool_get_eee" },
	{ 0xc05962d3, "phy_set_asym_pause" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x86476470, "phy_start_aneg" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x693e69c0, "phy_print_status" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe5eb0c5b, "pci_set_master" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x865ef606, "netif_schedule_queue" },
	{ 0xc5f9cbf4, "pci_alloc_irq_vectors_affinity" },
	{ 0xc16e3cc8, "phy_mac_interrupt" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xbb2867b4, "phy_modify" },
	{ 0x438e8557, "dma_sync_single_for_cpu" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xeb824649, "phy_start" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xdcb707bf, "eth_platform_get_mac_address" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x1b77b1f3, "mdiobus_read" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xa0c144bc, "napi_enable" },
	{ 0xc6373c85, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xef70aa4c, "phy_speed_down" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb12d6551, "phy_modify_paged" },
	{ 0xec9030df, "netdev_printk" },
	{ 0x3a89a4be, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc9aceb3f, "phy_suspend" },
	{ 0xc56d0063, "softnet_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9871508d, "__phy_modify" },
	{ 0x74a0bead, "pci_clear_master" },
	{ 0x5e83a2c8, "pcim_iomap_regions" },
	{ 0xe47c2ee5, "devm_alloc_etherdev_mqs" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x2dccf961, "phy_ethtool_get_link_ksettings" },
	{ 0xf800f01b, "pci_select_bars" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0xe36fb66, "napi_gro_receive" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0xc67ef8d3, "pci_disable_link_state" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0xb1022be5, "__napi_schedule" },
	{ 0xc6154185, "phy_connect_direct" },
	{ 0xd6f375e6, "phy_speed_up" },
	{ 0xf0a1a399, "pci_status_get_and_clear_errors" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe50edf14, "pm_schedule_suspend" },
	{ 0xa62dc6, "__devm_alloc_percpu" },
	{ 0xbf3b049b, "__mdiobus_write" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6029663b, "napi_complete_done" },
	{ 0x8d0fc958, "genphy_soft_reset" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0x21ce3ed1, "dev_fetch_sw_netstats" },
	{ 0x6a92ab99, "phy_restore_page" },
	{ 0x3aff67f9, "phy_read_paged" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x91ee43e3, "pci_unregister_driver" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x62187e1e, "phy_write_mmd" },
	{ 0xa9a8903e, "pci_irq_vector" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x805245aa, "pci_set_power_state" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x58ba63fd, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x23e57e94, "phy_attached_info" },
	{ 0x285af5d2, "dma_sync_single_for_device" },
	{ 0x9e3c456e, "pci_dev_run_wake" },
	{ 0x164bf20a, "phy_ethtool_set_eee" },
	{ 0xe776c4a6, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x73534824, "dma_unmap_page_attrs" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x1d969fec, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xea100baf, "netdev_update_features" },
	{ 0x5ebb9ac3, "__napi_alloc_skb" },
	{ 0x853ef3c3, "skb_tstamp_tx" },
	{ 0x5f918e20, "pci_wake_from_d3" },
	{ 0x5aea685d, "pcim_set_mwi" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd815b312, "__skb_pad" },
	{ 0x37fb5f45, "phy_set_max_speed" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "622B72AB6A19AD21F10ED93");
