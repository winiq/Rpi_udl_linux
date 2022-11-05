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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x3a063e2f, "serdev_device_close" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xad2c9573, "serdev_device_write_buf" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xdcb764ad, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xfc2ace19, "__serdev_device_driver_register" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0xaa71940d, "of_get_mac_address" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x696fc61d, "serdev_device_open" },
	{ 0x4829a47e, "memcpy" },
	{ 0x25533c9d, "dev_trans_start" },
	{ 0x5909610f, "serdev_device_set_flow_control" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xfe1e061, "serdev_device_set_baudrate" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xe22d1723, "skb_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "56CB96F5A4D8B7C21100D50");
