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
	{ 0x6f106a69, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x31ace107, "nf_nat_irc_hook" },
	{ 0xb57a6142, "nf_nat_helper_unregister" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1479cc1c, "nf_ct_unexpect_related" },
	{ 0xc5263429, "nf_ct_helper_log" },
	{ 0xfe277d69, "__nf_nat_mangle_tcp_packet" },
	{ 0x98cf60b3, "strlen" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x75005c57, "nf_nat_follow_master" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_irc,nf_nat");


MODULE_INFO(srcversion, "C481E7EC416976675B71310");
