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
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x158fef8d, "skb_seq_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x1533ec67, "genl_register_family" },
	{ 0x349cba85, "strchr" },
	{ 0x2ffbc62d, "skb_split" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xead00af0, "genl_unregister_family" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x3a20fe96, "br_multicast_has_router_adjacent" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x81294be0, "netdev_master_upper_dev_get_rcu" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb15b4109, "crc32c" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3fa454e, "br_multicast_list_adjacent" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x8a3ceaf6, "netif_rx_any_context" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xa346e867, "netdev_master_upper_dev_link" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x9094d2a2, "ip_mc_check_igmp" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdd7ee355, "br_multicast_has_querier_anywhere" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x902a16a7, "__ethtool_get_link_ksettings" },
	{ 0x686058f4, "arp_create" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x1b80b530, "skb_prepare_seq_read" },
	{ 0xcd279169, "nla_find" },
	{ 0xd367601c, "nla_put" },
	{ 0xbd6841d4, "crc16" },
	{ 0x7ea87368, "netdev_upper_dev_unlink" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0x952664c5, "do_exit" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d6bb9e2, "kobject_uevent_env" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xeea50d0c, "netlink_broadcast" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x92997ed8, "_printk" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0x15a37cf3, "cfg80211_calculate_bitrate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xca7ffc66, "param_set_copystring" },
	{ 0xc81758e5, "ether_setup" },
	{ 0x5f765358, "__pskb_copy_fclone" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xd2800691, "nf_conntrack_destroy" },
	{ 0x5240024d, "skb_pull_rcsum" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xb69ce9a6, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcae712b, "dev_get_iflink" },
	{ 0x4829a47e, "memcpy" },
	{ 0x61ac310c, "genlmsg_put" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x538f361a, "br_multicast_has_querier_adjacent" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x1bad30bb, "param_get_string" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xe22d1723, "skb_put" },
	{ 0xb896f734, "ipv6_mc_check_mld" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x8adf111e, "cfg80211_get_station" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "bridge,cfg80211");


MODULE_INFO(srcversion, "653144D8AF00A02EF166902");