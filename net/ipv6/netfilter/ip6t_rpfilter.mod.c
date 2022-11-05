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
	{ 0xb31dca45, "xt_unregister_match" },
	{ 0xe9bd984d, "xt_register_match" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x54113cf4, "dst_release" },
	{ 0xa5bf2810, "l3mdev_master_ifindex_rcu" },
	{ 0x379ffe5e, "ip6_route_lookup" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "x_tables,ipv6");


MODULE_INFO(srcversion, "1842A0AEAEA37EF3566D01C");
