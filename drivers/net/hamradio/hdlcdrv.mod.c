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
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc68f0827, "ax25_ip_xmit" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4f66332e, "__dev_kfree_skb_irq" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x96068ceb, "ax25_header_ops" },
};

MODULE_INFO(depends, "ax25,crc-ccitt");


MODULE_INFO(srcversion, "EDA9EC2AEC39CD7CA9AA042");
