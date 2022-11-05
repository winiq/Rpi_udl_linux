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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xa7a116d3, "ipv6_find_hdr" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x414b2777, "udp6_lib_lookup" },
	{ 0x12bf8d1c, "ipv6_skip_exthdr" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc14cab61, "inet6_lookup" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "634A68B39BDC4FDE17EBA00");
