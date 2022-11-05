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
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x262c2199, "qdisc_watchdog_schedule_range_ns" },
	{ 0x124aeca4, "qdisc_watchdog_init" },
	{ 0x5dad2f28, "qdisc_hash_add" },
	{ 0x672b6157, "fifo_create_dflt" },
	{ 0x55a72c6e, "bfifo_qdisc_ops" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xa0d87339, "qdisc_get_rtab" },
	{ 0x3c96d6a, "fifo_set_limit" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9a977884, "noop_qdisc" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xcc8302e9, "qdisc_tree_reduce_backlog" },
	{ 0xd19fb83, "__qdisc_calculate_pkt_len" },
	{ 0x88cc38b3, "__skb_gso_segment" },
	{ 0x376aafa8, "netif_skb_features" },
	{ 0x27117ee8, "skb_gso_validate_mac_len" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0xd367601c, "nla_put" },
	{ 0x91348b28, "qdisc_offload_dump_helper" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3226a809, "qdisc_reset" },
	{ 0x65ea6047, "qdisc_put" },
	{ 0xd72c6971, "qdisc_watchdog_cancel" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "33EC59281F2A5F6E38EB1D3");
