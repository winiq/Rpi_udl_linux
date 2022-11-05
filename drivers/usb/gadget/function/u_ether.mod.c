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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x98cf60b3, "strlen" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x62849ac7, "dev_valid_name" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x96848186, "scnprintf" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe22d1723, "skb_put" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1EA490F04863FF10576D54C");
