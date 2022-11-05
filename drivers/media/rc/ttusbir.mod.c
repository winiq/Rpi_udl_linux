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
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8c22b10c, "ir_raw_event_handle" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0x236545c1, "ir_raw_event_store_with_filter" },
	{ 0xfc12fb52, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e33c526, "rc_free_device" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8392ac79, "rc_allocate_device" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x55487139, "rc_unregister_device" },
	{ 0x8a06601b, "led_classdev_suspend" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0xde664e8b, "led_classdev_resume" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0B48p2003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68B0C158BDBAD15EF59BDEB");
