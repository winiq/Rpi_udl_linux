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
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x5dc00640, "single_open" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x416e5db, "single_release" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0xbd19b5, "seq_read" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x865ef606, "netif_schedule_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb7377510, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0xb0b91e01, "skb_copy_expand" },
	{ 0xaa71940d, "of_get_mac_address" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x25533c9d, "dev_trans_start" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xe22d1723, "skb_put" },
	{ 0xd9a82f7e, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "95CB68F4405098F5BF43BD4");
