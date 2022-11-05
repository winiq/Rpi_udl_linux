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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xdf738514, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x16b43202, "rt2x00lib_dmastart" },
	{ 0x847304f6, "rt2x00queue_flush_queue" },
	{ 0x94e4ad63, "ieee80211_alloc_hw_nm" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xd101b264, "rt2x00queue_for_each_entry" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x43754682, "rt2x00queue_start_queue" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6ff927b, "rt2x00lib_remove_dev" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x14a57ebd, "rt2x00queue_get_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x9f4ff5f0, "rt2x00lib_rxdone" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x68b9556d, "ieee80211_free_hw" },
	{ 0xf71ce158, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xcad592d0, "rt2x00lib_dmadone" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x3e5de318, "rt2x00lib_probe_dev" },
	{ 0x96dd8f36, "rt2x00queue_stop_queue" },
	{ 0xfab26635, "rt2x00lib_suspend" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0xd815b312, "__skb_pad" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "B6D6E998F10E2B42CD4BEDA");
