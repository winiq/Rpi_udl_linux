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
	{ 0x9868cd, "inet_diag_unregister" },
	{ 0xd868acbb, "inet_diag_register" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf9d905e5, "__udp6_lib_lookup" },
	{ 0x26509068, "sk_free" },
	{ 0x8ca457a, "netlink_unicast" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xcdf7e1b1, "sock_diag_check_cookie" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa64846cb, "__udp4_lib_lookup" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x95a67b07, "udp_table" },
	{ 0xd4d1983c, "udplite_table" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x65e0df8f, "inet_sk_diag_fill" },
	{ 0x37307dd4, "inet_diag_bc_sk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x11e2af69, "netlink_net_capable" },
};

MODULE_INFO(depends, "inet_diag,ipv6");


MODULE_INFO(srcversion, "A6913F04E5CF94B0DEC8CAB");
