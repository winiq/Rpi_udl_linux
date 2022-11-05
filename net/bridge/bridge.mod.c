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
	{ 0x741facb8, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0xdb083c71, "neigh_lookup" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf905897c, "stp_proto_unregister" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x20926da7, "sysfs_remove_bin_file" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0x777b2dd, "nf_queue" },
	{ 0x7442f0f9, "percpu_counter_destroy" },
	{ 0x7b52e38, "rtnl_unregister" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x5992b1a7, "netdev_notice" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x740d837e, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc569d8e9, "ipv6_chk_addr" },
	{ 0x9b2a4c4d, "dev_disable_lro" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x57240154, "dev_uc_add" },
	{ 0x58442460, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5efceb3a, "ipv6_dev_mc_dec" },
	{ 0x8c67236a, "arp_tbl" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2124474, "ip_send_check" },
	{ 0xaed5719a, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6852f846, "rtnl_notify" },
	{ 0x411c03d2, "ipv6_dev_mc_inc" },
	{ 0x49016ee9, "netdev_master_upper_dev_get" },
	{ 0x1dc1f1a7, "net_ns_get_ownership" },
	{ 0x865e6a07, "dev_set_allmulti" },
	{ 0x8ee7161d, "is_skb_forwardable" },
	{ 0x5b4cffec, "call_netdevice_notifiers" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x92a66c19, "kobject_del" },
	{ 0xc662ecda, "__tracepoint_br_fdb_external_learn_add" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x159ecfd1, "__netpoll_setup" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x19821689, "__tracepoint_fdb_delete" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x933fc755, "in_dev_finish_destroy" },
	{ 0xd85df5ea, "__traceiter_br_fdb_external_learn_add" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0x4f2e6851, "netdev_walk_all_upper_dev_rcu" },
	{ 0x2b3deabb, "__ip_mc_inc_group" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x29c2dd65, "nf_hook_slow" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x73cc20f8, "kobject_create_and_add" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa346e867, "netdev_master_upper_dev_link" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x9094d2a2, "ip_mc_check_igmp" },
	{ 0xece784c2, "rb_first" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x56e8a26, "dev_get_tstats64" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x504db6dc, "sysfs_rename_link_ns" },
	{ 0x27dc9471, "__tracepoint_br_fdb_update" },
	{ 0x2f58ccc5, "rtnl_register_module" },
	{ 0x50ee1daa, "stp_proto_register" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x902a16a7, "__ethtool_get_link_ksettings" },
	{ 0x686058f4, "arp_create" },
	{ 0x6d294e43, "clock_t_to_jiffies" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5e3240a0, "__cpu_online_mask" },
	{ 0x7850a963, "inet_select_addr" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x34087be7, "__skb_warn_lro_forwarding" },
	{ 0x84e68fa2, "kobject_init_and_add" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xcd279169, "nla_find" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x348b4f3e, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd367601c, "nla_put" },
	{ 0x670f8cae, "netif_receive_skb" },
	{ 0x7ea87368, "netdev_upper_dev_unlink" },
	{ 0x5a921311, "strncmp" },
	{ 0xbb4c1f69, "ndo_dflt_fdb_dump" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0xb7377510, "skb_push" },
	{ 0x652032cb, "mac_pton" },
	{ 0xd540130c, "__traceiter_fdb_delete" },
	{ 0xb7cc0cff, "__tracepoint_br_fdb_add" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0x8b87ccdb, "arp_send" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2125f076, "rtnl_af_unregister" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x1b46242a, "sysfs_remove_link" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xb3d198d9, "inet_confirm_addr" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x5da070b7, "ipv6_stub" },
	{ 0x82baa22e, "init_net" },
	{ 0x7e3191f6, "try_to_del_timer_sync" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0x96eaa868, "__ip_mc_dec_group" },
	{ 0xa793ef4e, "nla_reserve_64bit" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xac1ba713, "ipv6_dev_get_saddr" },
	{ 0x7d2a0e1c, "sysfs_create_link" },
	{ 0x291c107d, "rtnl_set_sk_err" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x18e82874, "rtnl_af_register" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6776b9eb, "netdev_rx_handler_unregister" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x92997ed8, "_printk" },
	{ 0xc4ae1fbc, "nla_put_nohdr" },
	{ 0xad089c33, "passthru_features_check" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x197bbda4, "arp_xmit" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x6397499c, "brioctl_set" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x93d992ee, "__percpu_counter_init" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xf66193d7, "__dev_get_by_name" },
	{ 0x9e34c017, "netdev_state_change" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0xdde0b2d8, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcae712b, "dev_get_iflink" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x53f22a0a, "sysfs_create_bin_file" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x3425857b, "netpoll_send_skb" },
	{ 0x74a4013a, "dev_uc_del" },
	{ 0xbafdfc43, "__traceiter_br_fdb_update" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x5117cbaa, "__netpoll_free" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x817812f1, "__traceiter_br_fdb_add" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xea100baf, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd383e102, "sysfs_create_file_ns" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xe22d1723, "skb_put" },
	{ 0xb896f734, "ipv6_mc_check_mld" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x1ce01553, "dev_pre_changeaddr_notify" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xa163fd6d, "dev_set_mtu" },
	{ 0x6831cd7d, "netdev_lower_get_next" },
};

MODULE_INFO(depends, "stp,ipv6,llc");


MODULE_INFO(srcversion, "47F594C7C3FDEA5580A4F04");