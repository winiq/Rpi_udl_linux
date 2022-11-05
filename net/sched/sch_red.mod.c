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
	{ 0x7154479, "tcf_qevent_handle" },
	{ 0xd19fb83, "__qdisc_calculate_pkt_len" },
	{ 0x2e2d0ccb, "tcf_qevent_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x785d979c, "tcf_qevent_validate_change" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5dad2f28, "qdisc_hash_add" },
	{ 0x672b6157, "fifo_create_dflt" },
	{ 0x55a72c6e, "bfifo_qdisc_ops" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb6d01765, "qdisc_offload_graft_helper" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xcc8302e9, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x9a977884, "noop_qdisc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3226a809, "qdisc_reset" },
	{ 0x65ea6047, "qdisc_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x91a8668, "tcf_qevent_destroy" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xd3156cc, "tcf_qevent_dump" },
	{ 0xd367601c, "nla_put" },
	{ 0x91348b28, "qdisc_offload_dump_helper" },
	{ 0x464f2dc3, "gnet_stats_copy_app" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "62F037B8C8317543D2A3A81");