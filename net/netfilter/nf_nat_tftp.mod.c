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
	{ 0x554cc1f0, "nf_nat_tftp_hook" },
	{ 0xb57a6142, "nf_nat_helper_unregister" },
	{ 0xc5263429, "nf_ct_helper_log" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x75005c57, "nf_nat_follow_master" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_tftp,nf_nat");


MODULE_INFO(srcversion, "24E6815DB2B382A93A025B1");
