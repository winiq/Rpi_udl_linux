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
	{ 0x4720dc7a, "tcf_block_get" },
	{ 0x9a977884, "noop_qdisc" },
	{ 0x5dad2f28, "qdisc_hash_add" },
	{ 0x289e48ea, "qdisc_create_dflt" },
	{ 0x34203793, "pfifo_qdisc_ops" },
	{ 0xb6d01765, "qdisc_offload_graft_helper" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xcc8302e9, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd5d1f4ff, "gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5d9dcdab, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x246f5241, "tcf_classify" },
	{ 0xd19fb83, "__qdisc_calculate_pkt_len" },
	{ 0x3226a809, "qdisc_reset" },
	{ 0x65ea6047, "qdisc_put" },
	{ 0x8f0c1804, "tcf_block_put" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xd367601c, "nla_put" },
	{ 0x91348b28, "qdisc_offload_dump_helper" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E59D2FCE28A55C905088A2B");
