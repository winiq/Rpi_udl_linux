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
	{ 0x6e18b435, "register_netdevice" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xaa9af6b5, "dev_forward_skb" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3fe1c0aa, "dev_mc_unsync" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x57240154, "dev_uc_add" },
	{ 0xaf387232, "__dev_forward_skb" },
	{ 0x90b277ad, "dev_mc_add_excl" },
	{ 0x58442460, "netdev_rx_handler_register" },
	{ 0x2b4a4d3e, "dev_uc_add_excl" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x865e6a07, "dev_set_allmulti" },
	{ 0x3543364b, "vlan_vid_del" },
	{ 0x5b4cffec, "call_netdevice_notifiers" },
	{ 0xbba0f4da, "linkwatch_fire_event" },
	{ 0x517d3ad4, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x159ecfd1, "__netpoll_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x1000e556, "dev_set_mac_address" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x86400aa, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x902a16a7, "__ethtool_get_link_ksettings" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb413691c, "dev_mc_del" },
	{ 0xd367601c, "nla_put" },
	{ 0x7ea87368, "netdev_upper_dev_unlink" },
	{ 0xbb4c1f69, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xa9ec437e, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x334c4a39, "eth_header_cache_update" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6776b9eb, "netdev_rx_handler_unregister" },
	{ 0x7a6dd3cf, "eth_header_parse" },
	{ 0xad089c33, "passthru_features_check" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x1b0bda5d, "netdev_upper_dev_link" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xed2cf23f, "dev_uc_unsync" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xdde0b2d8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e87add0, "dev_change_proto_down_generic" },
	{ 0x4829a47e, "memcpy" },
	{ 0xef10827a, "eth_header_cache" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x3425857b, "netpoll_send_skb" },
	{ 0x74a4013a, "dev_uc_del" },
	{ 0xc2183b33, "dev_uc_sync" },
	{ 0x5117cbaa, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xea100baf, "netdev_update_features" },
	{ 0xf845072, "dev_queue_xmit_accel" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xed2f1e11, "netdev_is_rx_handler_busy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcf1cb04c, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xa163fd6d, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DECFC8D5759CA1250A6FEC4");
