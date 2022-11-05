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
	{ 0x2453a8b0, "unregister_qdisc" },
	{ 0x28e76045, "register_qdisc" },
	{ 0x88cc38b3, "__skb_gso_segment" },
	{ 0x376aafa8, "netif_skb_features" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x246f5241, "tcf_classify" },
	{ 0x262c2199, "qdisc_watchdog_schedule_range_ns" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xcc8302e9, "qdisc_tree_reduce_backlog" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd5d1f4ff, "gnet_stats_copy_queue" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x4720dc7a, "tcf_block_get" },
	{ 0x124aeca4, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x2aa1f7e3, "nf_ct_get_tuple_skb" },
	{ 0x460f4a34, "flow_hash_from_keys" },
	{ 0x8da16983, "__skb_flow_dissect" },
	{ 0xc9831ad7, "flow_keys_dissector" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8f0c1804, "tcf_block_put" },
	{ 0xd72c6971, "qdisc_watchdog_cancel" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6307E213B4F864DF4C0064E");
