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
	{ 0x9ecf4732, "skb_trim" },
	{ 0xd367601c, "nla_put" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd5d1f4ff, "gnet_stats_copy_queue" },
	{ 0x5d9dcdab, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x683a9560, "__gnet_stats_copy_basic" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x656b77d2, "netdev_set_tc_queue" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x289e48ea, "qdisc_create_dflt" },
	{ 0x4e317e19, "default_qdisc_ops" },
	{ 0x8978c99c, "pfifo_fast_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x285d8791, "dev_activate" },
	{ 0x19667bd2, "dev_deactivate" },
	{ 0xb70ea5cb, "netdev_txq_to_tc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x649c8977, "netdev_set_num_tc" },
	{ 0xdcb764ad, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x65ea6047, "qdisc_put" },
	{ 0xc8ca5794, "dev_graft_qdisc" },
	{ 0x5dad2f28, "qdisc_hash_add" },
	{ 0x41736bd1, "qdisc_hash_del" },
	{ 0x9a977884, "noop_qdisc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ECE00A6D83F85AA214A82EA");
