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
	{ 0x1d24c881, "___ratelimit" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x54113cf4, "dst_release" },
	{ 0x47368bf4, "nf_route" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x4d54ba2e, "inet_proto_csum_replace4" },
	{ 0xd0411bd2, "skb_ensure_writable" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "A7D727BC28D99608B33F6BC");
