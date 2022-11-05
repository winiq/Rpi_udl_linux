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
	{ 0xdb083c71, "neigh_lookup" },
	{ 0x78526bc3, "inet_frag_kill" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd53c67b3, "unregister_net_sysctl_table" },
	{ 0x54113cf4, "dst_release" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0x2b3f48c1, "skb_copy" },
	{ 0x2e619f2d, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc514b829, "init_user_ns" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0x4a894ef5, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5ef66728, "inet_frag_find" },
	{ 0xbf000673, "inet_frag_reasm_prepare" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xd76c6a94, "inet_frags_fini" },
	{ 0x230dc761, "ieee802154_hdr_peek" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0x80365c66, "nd_tbl" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x82baa22e, "init_net" },
	{ 0xf8768626, "rtnl_link_unregister" },
	{ 0x2fb7f234, "lowpan_header_decompress" },
	{ 0x1575d278, "fqdir_init" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xbe1f76d, "inet_frag_reasm_finish" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5448d0d8, "inet_frag_destroy" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x73cf7492, "lowpan_unregister_netdevice" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x59298a1b, "ieee802154_hdr_peek_addrs" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3beac3db, "rtnl_link_register" },
	{ 0xd6af63ae, "lowpan_register_netdevice" },
	{ 0xde356f7c, "inet_frags_init" },
	{ 0x58d5889a, "inet_frag_queue_insert" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x7510c7fe, "register_net_sysctl" },
	{ 0xe22d1723, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154,ipv6");


MODULE_INFO(srcversion, "555B70E9FE86BA0E48AE312");
