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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x35c8f250, "usb_gstrings_attach" },
	{ 0xd6099f7a, "usb_free_all_descriptors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x98cf60b3, "strlen" },
	{ 0xfe0a7e1f, "gether_get_qmult" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xbcbd3429, "gether_setup_name_default" },
	{ 0xaa59303, "netif_carrier_on" },
	{ 0xaeeafc8b, "netif_carrier_off" },
	{ 0xaa852ac3, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfc794cb8, "gether_set_ifname" },
	{ 0xc34f9011, "gether_get_ifname" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb7e25bd9, "skb_realloc_headroom" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x93bd6ea7, "usb_function_unregister" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x8a8bf6c, "gether_set_host_addr" },
	{ 0x7eb6ffb6, "gether_get_dev_addr" },
	{ 0xcee715b9, "gether_connect" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6e93807c, "usb_ep_autoconfig" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0xffb7c514, "ida_free" },
	{ 0x7b5ef7f2, "gether_set_gadget" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x324a343e, "gether_get_host_addr" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0xd17fc0fe, "gether_set_qmult" },
	{ 0x9674ec86, "gether_get_host_addr_u8" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfdfc3547, "usb_function_register" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xe4cdc21c, "gether_register_netdev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x10b6a214, "gether_set_dev_addr" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8db4107e, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x2aac98cd, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6ba77cc9, "usb_assign_descriptors" },
	{ 0xfe783c2d, "usb_interface_id" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xe591acb2, "usb_os_desc_prepare_interf_dir" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbc70de28, "dev_get_stats" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "407E7523C8A126BBE04C86C");
