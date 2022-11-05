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
	{ 0x6c17b689, "skb_queue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xd8311a9f, "skb_unlink" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xad88da9b, "skb_dequeue_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe22d1723, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AC2E407EFC82EF84B7BB4B2");
