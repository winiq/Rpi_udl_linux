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
	{ 0x1a984311, "mini_qdisc_pair_swap" },
	{ 0x9b4a670c, "mini_qdisc_pair_block_init" },
	{ 0x3d1514e4, "tcf_block_get_ext" },
	{ 0x4514b8a1, "mini_qdisc_pair_init" },
	{ 0x7be6905, "net_inc_egress_queue" },
	{ 0x2c3054f9, "net_inc_ingress_queue" },
	{ 0x86f85114, "net_dec_egress_queue" },
	{ 0x46013233, "net_dec_ingress_queue" },
	{ 0x3d8fa865, "tcf_block_put_ext" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EBF77A2FC1E32262EB9808E");
