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
	{ 0x2d3385d3, "system_wq" },
	{ 0x24d647d2, "ath6kl_core_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc04c1ca1, "ath6kl_core_cleanup" },
	{ 0x44dd04a2, "ath6kl_core_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xea1a5633, "ath6kl_stop_txrx" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x6cc1b2d, "ath6kl_core_init" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x2233c475, "ath6kl_core_rx_complete" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe0d66cc1, "ath6kl_core_tx_complete" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xe22d1723, "skb_put" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x37804aa, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E405A4B4C69E059DEBEAF5E");
