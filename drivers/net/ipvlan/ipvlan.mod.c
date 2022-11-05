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
	{ 0xa77bfd29, "register_inet6addr_validator_notifier" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xaa9af6b5, "dev_forward_skb" },
	{ 0x50e03afe, "dev_change_flags" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x3fe1c0aa, "dev_mc_unsync" },
	{ 0xc32c71af, "register_inetaddr_validator_notifier" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xc3c019d1, "ip_local_out" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xab63baa5, "unregister_inetaddr_validator_notifier" },
	{ 0x58442460, "netdev_rx_handler_register" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x865e6a07, "dev_set_allmulti" },
	{ 0x3543364b, "vlan_vid_del" },
	{ 0x5b4cffec, "call_netdevice_notifiers" },
	{ 0x517d3ad4, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x47c65bfc, "unregister_inet6addr_validator_notifier" },
	{ 0x2549883d, "skb_scrub_packet" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x902a16a7, "__ethtool_get_link_ksettings" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xffb7c514, "ida_free" },
	{ 0xd367601c, "nla_put" },
	{ 0x7ea87368, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xa9ec437e, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xe3bed6e4, "ip_route_input_noref" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xd9762a53, "ip6_route_output_flags" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x334c4a39, "eth_header_cache_update" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7a6dd3cf, "eth_header_parse" },
	{ 0x6776b9eb, "netdev_rx_handler_unregister" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x1b0bda5d, "netdev_upper_dev_link" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xed2cf23f, "dev_uc_unsync" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x87404e2a, "ip_route_output_flow" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0xef10827a, "eth_header_cache" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xc2183b33, "dev_uc_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x72298d2f, "ip6_local_out" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xea100baf, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xed2f1e11, "netdev_is_rx_handler_busy" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xcf1cb04c, "dev_mc_sync" },
	{ 0x1ce01553, "dev_pre_changeaddr_notify" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x8a64eefd, "ip6_route_input_lookup" },
	{ 0x9158ff3f, "__do_once_done" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "4E468608E7E17F7FC25CC3B");
