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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x676dc7f8, "rt2x00lib_get_bssidx" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xa084666b, "rt2x00mac_conf_tx" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x3bc079e6, "rt2x00lib_txdone" },
	{ 0x54acd503, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x14a57ebd, "rt2x00queue_get_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x85b48bed, "rt2x00lib_txdone_nomatch" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xce1473b1, "ieee80211_restart_hw" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0xf71ce158, "rt2x00lib_txdone_noinfo" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb0479a67, "rt2x00lib_set_mac_address" },
	{ 0xd815b312, "__skb_pad" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211,crc-ccitt");


MODULE_INFO(srcversion, "DDE7DFBB9742CD36CB31B28");
