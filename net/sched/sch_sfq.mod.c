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
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x246f5241, "tcf_classify" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x994395ed, "rtnl_kfree_skbs" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x4720dc7a, "tcf_block_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xcc8302e9, "qdisc_tree_reduce_backlog" },
	{ 0xca65312c, "skb_get_hash_perturb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x464f2dc3, "gnet_stats_copy_app" },
	{ 0xd5d1f4ff, "gnet_stats_copy_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8f0c1804, "tcf_block_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D8B3BC032062DD2E03A509D");
