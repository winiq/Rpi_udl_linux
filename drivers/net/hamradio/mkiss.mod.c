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
	{ 0x16383ff2, "tty_unregister_ldisc" },
	{ 0x7303ce54, "tty_register_ldisc" },
	{ 0xe7393c3e, "tty_chars_in_buffer" },
	{ 0xc68f0827, "ax25_ip_xmit" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x25533c9d, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xbd6841d4, "crc16" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x3ce35277, "tty_unthrottle" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x9f76baf4, "_raw_write_unlock_irq" },
	{ 0x3aca0190, "_raw_write_lock_irq" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x4daf0ad3, "tty_driver_flush_buffer" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x92997ed8, "_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa6257a2f, "complete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x865ef606, "netif_schedule_queue" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x96068ceb, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "A5A712A42DA36A1D5D42DE2");
