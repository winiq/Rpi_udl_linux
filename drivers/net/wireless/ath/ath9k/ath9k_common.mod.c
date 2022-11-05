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
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xce2d397a, "ath9k_hw_gettsf64" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x7fc4b79f, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa8c7f078, "ath_hw_keyreset" },
	{ 0xd4492161, "ath9k_hw_set_txpowerlimit" },
};

MODULE_INFO(depends, "cfg80211,ath9k_hw,ath");


MODULE_INFO(srcversion, "77E99D44B2E3BB47B3346DC");
