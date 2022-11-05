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
	{ 0x35c8f250, "usb_gstrings_attach" },
	{ 0xd6099f7a, "usb_free_all_descriptors" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0xfe0a7e1f, "gether_get_qmult" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xbcbd3429, "gether_setup_name_default" },
	{ 0x7d3266d5, "gether_get_host_addr_cdc" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfc794cb8, "gether_set_ifname" },
	{ 0xc34f9011, "gether_get_ifname" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x93bd6ea7, "usb_function_unregister" },
	{ 0x8a8bf6c, "gether_set_host_addr" },
	{ 0x7eb6ffb6, "gether_get_dev_addr" },
	{ 0xcee715b9, "gether_connect" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6e93807c, "usb_ep_autoconfig" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x7b5ef7f2, "gether_set_gadget" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x324a343e, "gether_get_host_addr" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0xd17fc0fe, "gether_set_qmult" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfdfc3547, "usb_function_register" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0xe4cdc21c, "gether_register_netdev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x10b6a214, "gether_set_dev_addr" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8db4107e, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x2aac98cd, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ba77cc9, "usb_assign_descriptors" },
	{ 0xfe783c2d, "usb_interface_id" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "E3796C2E2AAF55B13CB4E89");
