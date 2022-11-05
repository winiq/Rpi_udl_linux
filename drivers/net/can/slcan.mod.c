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
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x955fcad0, "tty_hangup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x7303ce54, "tty_register_ldisc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6e18b435, "register_netdevice" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7f8095, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x92997ed8, "_printk" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0xe22d1723, "skb_put" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb52ce0ea, "tty_mode_ioctl" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B199BA1EC1B826668927F3B");
