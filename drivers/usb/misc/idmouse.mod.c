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
	{ 0x9f64a537, "default_llseek" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x533ca3f8, "usb_find_interface" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0681p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "219323E5F7DDD7AABAF0D80");
