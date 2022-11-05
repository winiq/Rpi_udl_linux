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
	{ 0xe0013af, "lib80211_unregister_crypto_ops" },
	{ 0x3ecfda8e, "lib80211_register_crypto_ops" },
	{ 0xb7377510, "skb_push" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc935405a, "wireless_send_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x86592ac3, "crypto_alloc_shash" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x45e310e7, "crypto_destroy_tfm" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1a456e89, "crypto_shash_final" },
	{ 0xf6471863, "crypto_shash_update" },
	{ 0xdcb764ad, "memset" },
	{ 0x54674230, "crypto_shash_setkey" },
	{ 0xc6e1284c, "seq_printf" },
};

MODULE_INFO(depends, "lib80211,libarc4");


MODULE_INFO(srcversion, "342825861167009A7A02E3B");
