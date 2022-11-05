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
	{ 0x43bcd2f6, "xt_unregister_targets" },
	{ 0x68921f19, "xt_register_targets" },
	{ 0x682cb948, "nf_nat_redirect_ipv6" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0xd07bea36, "nf_nat_redirect_ipv4" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
};

MODULE_INFO(depends, "x_tables,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "B6B069F4F0E1CE07496143C");
