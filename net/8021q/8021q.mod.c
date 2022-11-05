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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x50e03afe, "dev_change_flags" },
	{ 0x90334656, "vlan_filter_push_vids" },
	{ 0x3fe1c0aa, "dev_mc_unsync" },
	{ 0xf394b629, "vlan_filter_drop_vids" },
	{ 0x740d837e, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8b45f45a, "proc_create_single_data" },
	{ 0xc963fdab, "garp_uninit_applicant" },
	{ 0x1db9ffbf, "vlan_dev_vlan_id" },
	{ 0x57240154, "dev_uc_add" },
	{ 0xbedb1058, "_proc_mkdir" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x4f99552b, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdef98c9d, "vlan_uses_dev" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x865e6a07, "dev_set_allmulti" },
	{ 0x3543364b, "vlan_vid_del" },
	{ 0x5b4cffec, "call_netdevice_notifiers" },
	{ 0xbba0f4da, "linkwatch_fire_event" },
	{ 0x517d3ad4, "vlan_vid_add" },
	{ 0x159ecfd1, "__netpoll_setup" },
	{ 0x62624ed4, "garp_init_applicant" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x2c2a46a, "proc_remove" },
	{ 0x2c32757e, "vlan_ioctl_set" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x902a16a7, "__ethtool_get_link_ksettings" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xc92833ee, "garp_register_application" },
	{ 0xd367601c, "nla_put" },
	{ 0x7ea87368, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfbb8a761, "strscpy_pad" },
	{ 0xb7377510, "skb_push" },
	{ 0xa9ec437e, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0x50988d41, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7a6dd3cf, "eth_header_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x1b0bda5d, "netdev_upper_dev_link" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xed2cf23f, "dev_uc_unsync" },
	{ 0xf66193d7, "__dev_get_by_name" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x606d4c64, "garp_unregister_application" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xdde0b2d8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x3425857b, "netpoll_send_skb" },
	{ 0x74a4013a, "dev_uc_del" },
	{ 0xc2183b33, "dev_uc_sync" },
	{ 0x5117cbaa, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0xea100baf, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xcf1cb04c, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbc70de28, "dev_get_stats" },
	{ 0xa163fd6d, "dev_set_mtu" },
};

MODULE_INFO(depends, "garp");


MODULE_INFO(srcversion, "2027994B2785298484F5DDF");
