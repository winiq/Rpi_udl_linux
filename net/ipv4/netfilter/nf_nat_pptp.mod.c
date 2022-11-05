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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7ddd2f04, "nf_nat_pptp_hook_expectfn" },
	{ 0xf6fe74bb, "nf_nat_pptp_hook_exp_gre" },
	{ 0x1fc31c4e, "nf_nat_pptp_hook_inbound" },
	{ 0x1a215ec8, "nf_nat_pptp_hook_outbound" },
	{ 0xfe277d69, "__nf_nat_mangle_tcp_packet" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x376890f9, "nf_nat_setup_info" },
	{ 0x824834fe, "nf_ct_expect_put" },
	{ 0x1479cc1c, "nf_ct_unexpect_related" },
	{ 0xe47cee7d, "nf_ct_expect_find_get" },
	{ 0x44e4a5f7, "nf_ct_nat_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "6EB6E30103FB1287F9CB07B");
