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
	{ 0xc0f38e3d, "ethtool_op_get_ts_info" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0xad089c33, "passthru_features_check" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x6029663b, "napi_complete_done" },
	{ 0xff4a4010, "bpf_redirect_info" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x670f8cae, "netif_receive_skb" },
	{ 0xf9deb26d, "xdp_do_redirect" },
	{ 0x381e68b, "__traceiter_xdp_exception" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x8b7a698b, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0xcdc86b55, "sched_clock" },
	{ 0xeb4c8c17, "xdp_master_redirect" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x146cc88f, "bpf_master_redirect_enabled_key" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x6ff17599, "skb_headers_offset_update" },
	{ 0xa0706c77, "skb_copy_header" },
	{ 0xe22d1723, "skb_put" },
	{ 0x2653f555, "build_skb" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0x853ef3c3, "skb_tstamp_tx" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xaa7206e7, "sock_wfree" },
	{ 0xaf387232, "__dev_forward_skb" },
	{ 0x1b673a2e, "skb_clone_tx_timestamp" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x507945b0, "__put_net" },
	{ 0xfc94fa93, "rtnl_configure_link" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0xba398427, "rtnl_create_link" },
	{ 0x4e3fffcd, "rtnl_link_get_net" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0x84c03e9a, "rtnl_nla_parse_ifla" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0x210d9469, "xdp_convert_zc_to_xdp_frame" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc759c96, "__traceiter_xdp_bulk_tx" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbd5704ec, "__tracepoint_xdp_bulk_tx" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xea100baf, "netdev_update_features" },
	{ 0x58ca950b, "bpf_prog_put" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x92997ed8, "_printk" },
	{ 0xd17c8ecb, "napi_disable" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xaa8bd48, "netdev_features_change" },
	{ 0xbe676d6, "xdp_rxq_info_is_reg" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xa0c144bc, "napi_enable" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xf259b77c, "__xdp_build_skb_from_frame" },
	{ 0xe36fb66, "napi_gro_receive" },
	{ 0xd91dbd1f, "xdp_alloc_skb_bulk" },
	{ 0xb1022be5, "__napi_schedule" },
	{ 0x91929663, "napi_schedule_prep" },
	{ 0xa6db24dd, "netif_set_real_num_rx_queues" },
	{ 0x1c809a91, "netif_set_real_num_tx_queues" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2707a730, "dev_lstats_read" },
	{ 0x5792f848, "strlcpy" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xc00689ca, "__netif_napi_del" },
	{ 0x10702740, "xdp_rxq_info_unreg" },
	{ 0x3a89a4be, "netif_napi_add" },
	{ 0xc2654188, "xdp_rxq_info_reg_mem_model" },
	{ 0xaf7b53c1, "xdp_rxq_info_reg" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x445650ff, "xdp_return_frame" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B76C163E0869FA08C3ABBB1");
