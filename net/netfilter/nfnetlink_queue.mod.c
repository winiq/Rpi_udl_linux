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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd7ea7094, "nf_unregister_queue_handler" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xd57b0a60, "nf_register_queue_handler" },
	{ 0xb0443cda, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9a1c71a8, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xf068c254, "nf_queue_entry_free" },
	{ 0xe6e97cc, "nf_queue_entry_get_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x88cc38b3, "__skb_gso_segment" },
	{ 0x92997ed8, "_printk" },
	{ 0xaab7d71, "from_kgid_munged" },
	{ 0xf4ce22b8, "from_kuid_munged" },
	{ 0xc514b829, "init_user_ns" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x4af593fc, "skb_checksum_help" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x6877478a, "skb_zerocopy_headlen" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xf99c0547, "skb_tx_error" },
	{ 0xd0a04e39, "nfnetlink_unicast" },
	{ 0xec44dd88, "skb_zerocopy" },
	{ 0xd367601c, "nla_put" },
	{ 0xf4d84775, "__nla_reserve" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x555e0f27, "___pskb_trim" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0xe22d1723, "skb_put" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd0411bd2, "skb_ensure_writable" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x6059e087, "proc_create_net_data" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6587c97e, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x88c3ca3, "nfnl_ct_hook" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe4ff6fd9, "nf_reinject" },
	{ 0xad463baa, "nf_ct_hook" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "941752342D187A05410FD38");
