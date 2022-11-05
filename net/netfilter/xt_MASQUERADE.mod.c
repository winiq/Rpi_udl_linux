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
	{ 0xd9c25654, "nf_nat_masquerade_inet_unregister_notifiers" },
	{ 0x43bcd2f6, "xt_unregister_targets" },
	{ 0x3bc17c49, "nf_nat_masquerade_inet_register_notifiers" },
	{ 0x68921f19, "xt_register_targets" },
	{ 0xdac9f9c2, "nf_nat_masquerade_ipv6" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xaf91ecad, "nf_nat_masquerade_ipv4" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
};

MODULE_INFO(depends, "nf_nat,x_tables,nf_conntrack");


MODULE_INFO(srcversion, "D9DF6BE14FC070C7141985C");
