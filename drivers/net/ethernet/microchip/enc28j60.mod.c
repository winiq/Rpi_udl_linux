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
	{ 0x826655e4, "param_ops_int" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x7f8095, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5d58a684, "device_get_mac_address" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xec9030df, "netdev_printk" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x54f59995, "spi_write_then_read" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92997ed8, "_printk" },
	{ 0xc313ff9a, "_dev_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c35d75a, "unregister_netdev" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "671248F8334B11A39F859FD");
