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
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xcc8302e9, "qdisc_tree_reduce_backlog" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x56470118, "__warn_printk" },
	{ 0x994395ed, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xd367601c, "nla_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x464f2dc3, "gnet_stats_copy_app" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "236D012D871DE1FDB525439");