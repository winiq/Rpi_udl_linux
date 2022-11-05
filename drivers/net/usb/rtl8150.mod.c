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
	{ 0x5ba36750, "ethtool_op_get_link" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xe9104552, "netif_device_attach" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x2e6a27ca, "netif_rx" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe22d1723, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5992b1a7, "netdev_notice" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7abdca01, "alloc_etherdev_mqs" },
	{ 0xcc5b5428, "__netdev_alloc_skb" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4f66332e, "__dev_kfree_skb_irq" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5234a212, "usb_control_msg_send" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xe5f17584, "usb_control_msg_recv" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0x66e0c1f0, "netif_device_detach" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xae102ed8, "_dev_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8D73106A18612B69D3718B3");
