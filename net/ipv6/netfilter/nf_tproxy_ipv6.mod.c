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
	{ 0x5aac000b, "inet_twsk_put" },
	{ 0x6289f3c4, "inet6_lookup_listener" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x414b2777, "udp6_lib_lookup" },
	{ 0x4b56854b, "__inet6_lookup_established" },
	{ 0x26509068, "sk_free" },
	{ 0xbecc6691, "inet_twsk_deschedule_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe4e0dd93, "skb_copy_bits" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "5ADD49EF3A226C401CCF6A2");
