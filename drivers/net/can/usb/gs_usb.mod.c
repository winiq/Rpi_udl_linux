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
	{ 0x10feca47, "can_change_mtu" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x8c78196, "alloc_can_skb" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x78305fec, "alloc_can_err_skb" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x4378af6a, "can_get_echo_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x26c10440, "open_candev" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0xc8c38beb, "can_free_echo_skb" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xffb35a2a, "can_put_echo_skb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0x41364173, "close_candev" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x821a8c68, "register_candev" },
	{ 0x3f770116, "alloc_candev_mqs" },
	{ 0x2fc6088a, "free_candev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x7088be82, "unregister_candev" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v1D50p606Fd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1209p2323d*dc*dsc*dp*ic*isc*ip*in00*");

MODULE_INFO(srcversion, "4533EC1452EEC3019DD3C00");
